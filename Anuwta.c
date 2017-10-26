#include<stdio.h>
int main(){
	long long int testcase;
	scanf("%lld",&testcase);
	while(testcase--){
		long long int num;
		scanf("%lld",&num);
		long long int sum = (num*(num+1))/2;
		long long int ans = num + sum;
		printf("%lld\n",ans);
	}
return 0;
}
