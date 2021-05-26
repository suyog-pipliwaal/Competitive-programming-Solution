#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,testcase, count = 0;
	cin >> testcase;
	while(testcase--) {
		count = 0;
		cin >> n;
		while(n!=0) {
			count++;
			n = n/2;
		}
		cout << (1<<(count-1)) -1 << endl;
	}
}
