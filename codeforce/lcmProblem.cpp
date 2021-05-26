#include<bits/stdc++.h>
using namespace std;
int main() {
	int testcase;
	cin >> testcase;
	while(testcase--) {
		int l ,r;
		cin >> l >> r;
		if (l*2 > r) cout << -1 << " " << -1 << endl;
		else cout << l << " " << 2*l << endl;
	}
}
