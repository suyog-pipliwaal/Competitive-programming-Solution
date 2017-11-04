#include<stdio.h>
#include<stdlib.h>
long long int min(long long int a,long long int b){
	return a>b?b:a;
}
long long int max(long long int a,long long int b){
	return b>a?b:a;
}

int main(){
	long long int num,query,number,L,R;
	scanf("%lld %lld",&num,&query);
	while(query--){
		scanf("%lld",&number);
		 L = max(number-num,num+1);
		 R = min(number-1,2*num);
		 if(L>R)
		 printf("0\n");
		 else
		 printf("%lld\n",R-L+1);
	}
	return 0;
}
