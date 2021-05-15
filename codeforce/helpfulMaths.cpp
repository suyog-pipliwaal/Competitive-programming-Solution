#include<bits/stdc++.h>
using namespace std;
vector<int> splitString(string s, string del) {
	vector<int> arr;
	int start = 0, end = s.find(del);
	while(end!=-1) {
		int num  = stoi(s.substr(start, end-start));
		arr.push_back(num);
		start = end+del.size();
		end = s.find(del, start);
	}
	arr.push_back(stoi(s.substr(start, end-start)));
	return arr;
}
int main() {
	string s;
	cin >> s;
	char arr[100];
	int len = 0;
	for(int i = 0;i < s.length(); i++) {
		if(s[i]!='+') {
			arr[len] = s[i];
			len++;
		}
	}
	sort(arr, arr+len);
	for(int i = 0; i< len; i++) {
		if(i==len-1) cout << arr[i]<< endl;
		else cout << arr[i] << "+";
	}
}
