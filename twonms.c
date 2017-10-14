#include<stdio.h>
int max(int a,int b){
return a>b?a:b;
}
int min(int a,int b){
return a>b?b:a;
}
int main(){
	int testcase,n,m,k;
	scanf("%d",&testcase);
		while(testcase--){
			int A,B,N;
			scanf("%d %d %d",&A,&B,&N);
			int a = A,b = B;
			while(1){
				if(N<=0)
				break;
				else{
					if(N>=0){
					A= A*2;
					N=N-1;					
					}
					if(N>=1){
					B = B*2;
					N=N-1;					
					}
 
				}
 
			}
		//printf("a = %d\n b = %d\n C= %d\n D = %d\n",a,b,A,B);
		int ans = max(A,B)/min(A,B);
		printf("%d\n",ans);
			
		}
 
return 0;
} 
