
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int num;
    while(n--)
    {
        scanf("%d",&num);
        if(num%2!=0)
        num=num-1;
        printf("%d\n",num);
 
    }
   // printf("Hello world!\n");
    return 0;
}
