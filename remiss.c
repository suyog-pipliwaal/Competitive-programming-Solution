#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,num1,num2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&num1,&num2);
        if(num1>num2)
        printf("%d %d\n",num1,(num1+num2));
        else
        printf("%d %d\n",num2,(num2+num1));
    }
   // printf("Hello world!\n");
    return 0;
}
