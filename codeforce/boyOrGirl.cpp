#include<bits/stdc++.h>
using namespace std;
int countDistinctChar(string s){
	unordered_map<char, int> m;
	for(int i = 0; i<s.length();i++) {
		m[s[i]]++;
	}
	return m.size();
}
int main() {
	string userName;
	cin >> userName;
	if (countDistinctChar(userName)%2!=0) {
		cout << "IGNORE HIM!" << endl;
	}
	else cout << "CHAT WITH HER!" << endl;

}
