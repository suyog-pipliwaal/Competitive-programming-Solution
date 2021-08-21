#include<stdio.h>
int main(){
	
	long long int candies, student,testcase;
	scanf("%lld",&testcase);
	while(testcase--){
		scanf("%lld %lld",&candies,&student);
		if(student==0&&candies==0)
		printf("0 0\n");
		else if(candies!=0&&student==0){
		printf("0 %lld\n",candies);
		}
		else if(candies==0&&student!=0)
		printf("0 0\n");
		else
		printf("%lld %lld\n",candies/student,candies%student);
 
	}
return 0;
}
