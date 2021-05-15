#include<bits/stdc++.h> 
using namespace std;
int main() {
	int testcase;
	int tress[50];
	cin >> testcase;
	while(testcase--) {
		int n;
		cin >> n;
		for(int i = 0; i<n; i++) {
			cin >> tress[i];
		}	
		unordered_map<int, int> m;
		for(int i = 0; i<n; i++) {
			for(int j = i+1; j<n; j++) {
				m[tress[j]-tress[i]]++;
			}
		}
		cout << m.size() << endl;
	}
}
