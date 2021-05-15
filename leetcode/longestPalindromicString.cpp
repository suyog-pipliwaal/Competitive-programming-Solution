#include<iostream>
#include<string>
#include<cstring>
typedef long unsigned int lsi;

void printString(std::string s, lsi start, lsi end);
void byBruateForce(std:: string s);
void byDynamic(std:: string s);
int main() {
	std::string s = "hello";
	byBruateForce(s);
	byDynamic(s);
	return 0;
}

void byDynamic(std::string s) {
	lsi n = s.size();
	bool table[n][n];
	memset(table, 0, sizeof(table));
	lsi maxlength = 1;
	for (lsi i=0; i<n-1; i++)
		table[i][i] = true;
	
	int start = 0;
	for(lsi i=0; i< n-1; i++) {
		if(s[i]==s[i+1]) {
			table[i][i+1] = true;
			start = i;
			maxlength = 2;
		}
	}

	for (lsi i =3; i<=n; i++) {
		for(lsi j=0; j<n-i+1; j++) {
			int k = j+i-1;
			if(table[j+1][k-1] && s[j]==s[k]) {
				table[j][k] = true;
				if(i>maxlength){
					start = j;
					maxlength = i;
				}
			}
		}
	}
	std::cout<<"The longest substring palindrome is" << std::endl;
  printString(s, start, start+maxlength-1);

}

void byBruateForce(std::string s) {
	lsi maxlength = 1, start = 0;
	for(lsi i = 0; i < s.length(); i++) {
		for(lsi j = i; j < s.length(); j++) {
			int flag = 1;
			// checking palindrome
			for (lsi k = 0; k < (j-i+1)/2; k++) {
				if(s[i+k]!=s[j-k])
					flag = 0;
			}

			if (flag && (j-i+1) > maxlength) {
					start = i;
					maxlength = j-i+1;
			}

		}
	}
	std::cout<<"The longest substring palindrome is" << std::endl;
	printString(s, start, start+maxlength-1);
}
void printString(std::string s, lsi start, lsi end) {
  for(lsi i = start; i <=end; i++) {
		std::cout << s[i];
	}
	std::cout << std::endl;
}

