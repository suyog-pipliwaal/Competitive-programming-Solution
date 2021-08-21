#include<stdio.h>
long long int sum(long long int n){
return (n*(n+1))/2;
}
int main(){
	int testcase,n,m,k;
	scanf("%d",&testcase);
		while(testcase--){
			long long int d,n;
			scanf("%lld %lld",&d,&n);
			long long int count;
			count = n;
		//	printf("count = %lld\n",count);
				int i;
		            for(i=1;i<=d;i++){
				count =  sum(count);	
				}
			printf("%lld\n",count);
		}
 
return 0;
} 
