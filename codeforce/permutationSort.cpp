#include<bits/stdc++.h>
using namespace std;
int main() {
	int testcase;
	cin >> testcase;
	while(testcase--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int &x : a) 
			cin >> x;
		int ans = 2;
		if(is_sorted(a.begin(), a.end()))
			ans = 0;
		else if(a[0]==1||	a[n-1]==n)
			ans = 1;
		else if(a[0]==n && a[n-1]==1)
			ans = 3;
		cout << ans << endl;
	}
}
