
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,num1,num2,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num1);
        while(num1!=0)
        {
            sum=sum+num1%10;
            num1=num1/10;
        }
        printf("%d\n",sum);
        sum=0;
    }
   // printf("Hello world!\n");
    return 0;
}
 
