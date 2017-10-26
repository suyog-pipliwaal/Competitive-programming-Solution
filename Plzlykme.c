#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int testcase;
	scanf("%lld",&testcase);
	while(testcase--){
		long long int likes,days,s,c,i,flag=0;
		scanf("%lld %lld %lld %lld",&likes,&days,&s,&c);
		long long int sum[days];
		sum[0] = s;
		if(s>=likes){
			flag = 1;
		}
		else{
		for(i = 1;i<days;i++){
			sum[i] = sum[i-1]+sum[i-1]*c;
			if(sum[i]>=likes){
				flag=1;
				break; 
				}
			}
		}	
		if(flag)
		printf("ALIVE AND KICKING\n");
		else
		printf("DEAD AND ROTTING\n");
	}
return 0;
}
