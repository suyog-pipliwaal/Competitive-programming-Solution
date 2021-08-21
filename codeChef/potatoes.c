#include<stdio.h>
#include<math.h>
int prime(int num){
	int i ,flage = 0;
	for(i = 2;i<=sqrt(num);i++){
		if(num%i==0){
			flage = 1;
			break;
		}
	}
	return flage;
}
int main(){
	
	int x, y,testcase;
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d %d",&x,&y);
		int sum = x+y,i;
		for(i = sum+1; ; i++){
			if( (prime(i)==0)&&(i>sum)){
			printf("%d\n",i-sum);
			break;		
		}	}
	}
return 0;
} 
