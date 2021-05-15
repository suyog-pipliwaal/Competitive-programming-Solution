#include<bits/stdc++.h>
using namespace std;
int main() {
	int len, ans = 0;
	cin >> len;
	char color[len];
	for(int i = 0; i<len; i++) {
		cin >> color[i];
	}

	for(int i = 0; i<len; i++) {
		if (color[i]==color[i+1]) ans++;
	}
	cout << ans << endl;
}
