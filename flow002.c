#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,num1,num2,rem;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num1);
        scanf("%d",&num2);
        rem=num1%num2;
        printf("%d\n",rem);
 
    }
    //printf("Hello world!\n");
    return 0;
}
