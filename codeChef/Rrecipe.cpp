#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	while(testcase!=0){
		string str;
		cin >> str;
		int ways = 1;
		int length = str.length();
		int MOD = 10000009;
		for(int i = 0;i<(length+1)/2;i++){
			char c1	 = str.at(i),c2 =  str[length-i-1];
            		if ((c1 == '?') &&( c2 == '?')){
                		ways = (ways * 26) % MOD;
       	         	}
       		        else if ((c1 != '?') && (c2 != '?') &&  (c1 != c2)){
               			ways = 0;
               		}
		}
		cout << ways << "\n";
		ways = 1;
	testcase--;
	}
}
