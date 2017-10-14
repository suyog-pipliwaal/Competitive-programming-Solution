#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
   long long int num1,num2=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&num1);
        num2=0;
        while(num1!=0)
        {
            num2=num2*10;
            num2=num2+num1%10;
            //printf("%lld",num2);
            num1=num1/10;
        }
        printf("%d\n",num2);
    }
   // printf("Hello world!\n");
    return 0;
}
