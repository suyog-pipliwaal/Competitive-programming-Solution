#include<iostream>
#include<string>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	while(testcase!=0){
		string floorblock;
		cin >> floorblock;
		int l = 1,ans = 0,cur = 0;
		for(int i = 0;i<floorblock.length();i++){
			cur++;
			if(floorblock.at(i)=='#'){
				if(cur	> l){
				l = cur;
				ans++;
				}
				cur = 0;
			}
		}
		cout << ans << endl;
		testcase--;
	}
}
