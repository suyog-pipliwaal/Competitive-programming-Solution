#include <bits/stdc++.h>
using namespace std;
int main() {
	int testcase;
	cin >> testcase;
	
	while(testcase--) {
		int n, z, a;
		cin >> n >>z;
		priority_queue<int> num;

		for (int i = 0; i<n; i++){
			cin >> a;
			num.push(a);
		}
		int count = 0, quit = 0;
		while(z>0) {
			int max = num.top();
			if (max == 0) {
				quit = 1;
				break;
			}
			z-=max;
			num.pop();
			num.push(max/2);
			count++;
		}
		if (quit == 0) 
			cout << count << endl;
		else
			cout << "Evacuate" << endl;
	}
	return 0;
}
