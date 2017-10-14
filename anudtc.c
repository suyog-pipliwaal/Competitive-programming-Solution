include<stdio.h>
int main(){
	int testcase;
	scanf("%d",&testcase);
	while(testcase--){
		int n;
		scanf("%d",&n);
		if(360%n==0)
		printf("y ");
		else
		printf("n ");
		
		if(n<=360)
		printf("y ");
		else
		printf("n ");
		
		if(n<=26)
		printf("y ");
		else
		printf("n ");
		
		printf("\n");
	}
return 0;
} 
