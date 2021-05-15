#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >>k;
	int score[n];
	for (int i = 0; i<n;i++) {
		cin >> score[i];
	}
	int checkpoint = score[k-1];
	int ans = 0;
	for(int i = 0;i<n;i++){
		if (score[i] >= checkpoint && score[i] > 0) ans++;
	}
	cout << ans << endl;
}
