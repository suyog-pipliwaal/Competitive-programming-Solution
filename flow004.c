#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int  n;
   long long int num1,i,num2,sum=0,last=0;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%lld",&num1);
        sum=sum+num1%10;
        //printf("%lld",sum);
        while(num1>0)
        {
            last=num1%10;
            num1=num1/10;
        }
       // printf("%lld",last);
       sum=sum+last;
       printf("%lld\n",sum);
        }
 
 
 
   // printf("Hello world!\n");
    return 0;
}
