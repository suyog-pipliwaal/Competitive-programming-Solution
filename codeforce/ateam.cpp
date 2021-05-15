#include<bits/stdc++.h>
using namespace std;
int main() {
	int numberOfProblem;
	int ans = 0;
	cin >> numberOfProblem;
	while(numberOfProblem--) {
		int num1, num2, num3;
		cin >> num1 >> num2 >> num3;
		if(num1+num2+num3>1) ans++;
	}
	cout << ans << endl;
}
