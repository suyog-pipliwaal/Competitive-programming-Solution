#include<bits/stdc++.h>
using namespace std;
int main() {
	int testcase;
	cin >> testcase;
	int ans = 0;
	while(testcase--) {
		string operation;
		cin >> operation;
		if(operation.find('+')!=std::string::npos) {
			ans++;
		}
		if (operation.find('-')!=std::string::npos) {
			ans--;
		}
	} 
	cout << ans << endl;
}
