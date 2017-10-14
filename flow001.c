#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,num1,num2,sum;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num1);
        scanf("%d",&num2);
        sum=num1+num2;
        printf("%d\n",sum);
    }
    //printf("Hello world!\n");
    return 0;
}
