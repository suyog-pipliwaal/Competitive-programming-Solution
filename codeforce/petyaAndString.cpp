#include<bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {
	string a, b;
	cin >> a;
	cin >> b;
	transform(a.begin(), a.end(), a.begin(),::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	int compare = a.compare(b);
	if (compare ==0){
		cout << "0" << endl;
	}
	if (compare > 0) {
		cout << "1" << endl;
	}
	if (compare < 0) {
		cout << "-1" << endl;
	}
}
