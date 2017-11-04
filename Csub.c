#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	long long int testcase;
	scanf("%lld",&testcase);
	while(testcase--){
		long long int num,i,count = 0;
		scanf("%lld",&num);
		char *str = (char*)malloc(num*sizeof(num));
		scanf("%s",str);
		count = 0;
		for(i=0;i<strlen(str);i++){
			if(str[i]=='1')
			count++;
		}
		printf("%lld\n",(count*(count+1))/2);
	}
return 0;
}
