#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int n,fact=1,num,i;
    scanf("%lld",&num);
    while(num--)
    {
        fact=1;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }
   // printf("Hello world!\n");
    return 0;
}
 
