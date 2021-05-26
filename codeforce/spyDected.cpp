#include<bits/stdc++.h>
using namespace std;
int solution() {
	int n, ans;
	cin >> n;
	vector<int> v(n);
	for(int &e: v) {
		cin >> e;
	}
	vector<int> a = v;
	sort(a.begin(), a.end());
	for(int i = 0; i<n ;i++) {
		if(v[i]!=a[1]) {
			ans = i+1;
		}
	}
	return ans;
}
int main(){ 
	int testcase;
	cin >> testcase;
	while(testcase--) {
		cout << solution() << endl;
	}
}
