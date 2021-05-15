#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	for(int i = 0; i<testcase; i++) {
		string word;
		cin >> word;
		if (word.length() > 10 ) {
			string ans = "";
			ans = ans+ word[0]+to_string(word.length()-2)+word[word.length()-1];
			cout << ans << endl;
		}	
		else {
				cout << word<< endl;
		}
	}
	return 0;
}
