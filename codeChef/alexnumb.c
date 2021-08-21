#include<stdio.h>
#include<string.h>
int main(){
	long long int testcase;
	scanf("%lld",&testcase);
	while(testcase--){
		long long int i,num,count;
		scanf("%lld",&num);
		long long int arry[num];
		for(i=0;i<num;i++){
			scanf("%lld",&arry[i]);
		}
		count = num*(num-1)/2;
		printf("%lld\n",count);
	}
return 0;
}
 
