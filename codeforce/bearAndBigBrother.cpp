#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, step = 0;
	cin >> a >> b;
	while(1) {
		if(a>b) break;
		else {
			a = a*3;
			b = b*2;
			step++;
		}
	}
	cout << step << endl;
}
