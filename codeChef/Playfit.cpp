#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	while(testcase!=0){
		int size,g;
		cin >> size;
		int res = 0;
                int mn = 1000000000;
		while(size--){
			cin >>g;
			if(res < g - mn) 
			res = g - mn;
     			 if(mn > g)
     			  mn = g;
		}
		 if(res == 0) 
		 cout << "UNFIT\n"; 
		 else 
		 cout << res << "\n";
	testcase--;
	}

}
