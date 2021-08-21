#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	while(testcase--){
		int n,k;
		cin >> n >> k;
		int *num = new int[n];
		for(int i = 0;i<n;i++){
			cin >> num[i];
		}
		int ok = false;
		for(int i = 0;i<n;i++){
			for(int j = i;j<n;j++){
				int count = 0;
				for(int k1 = i;k1<=j;k1++){
					if(num[k1]%2==0)
					count++;
				}
				if(count==k){
				ok = true;
				}
			}
		
		}
		if(!ok){
			cout <<"NO\n";
		}
		else{
			cout << "YES\n";
		}
	}
}
