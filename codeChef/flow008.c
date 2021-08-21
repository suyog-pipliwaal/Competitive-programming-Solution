#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,num;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        if(num<10)
        printf("What an obedient servant you are!\n");
        else
        printf("-1\n");
 
    }
   // printf("Hello world!\n");
    return 0;
}
