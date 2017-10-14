#include<stdio.h>
int main(){
	int testcase;
	scanf("%d",&testcase);
	while(testcase--){
		int num;	
		scanf("%d",&num);
		if(num%4==1)
		   printf("ALICE\n");
		else
		   printf("BOB\n");
	}
return 0;
} 
