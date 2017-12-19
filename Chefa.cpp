#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int testcase;
	cin >> testcase;
	while(testcase--){
		long long int n;
		cin >> n;
		long long int *a = new long long int[n];
		for(long long int i = 0;i<n;i++){
			cin >> a[i];
		}
		sort(a, a+n, greater<long long int>());
		long long int count = 0;
		for (long long int i = 0; i < n; i=i+2){
			//if(i%2==0){
				count = count + a[i];
				//cout << "chef play " << a[i] <<"\n";
				
			//}
		}
		cout << count <<"\n";
		count = 0;
	}
}
