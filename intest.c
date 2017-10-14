#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int count=0,i;
    long long int n,k,t;
    scanf("%lld",&n);
    scanf("%lld",&k);
    for(i=0;i<=n;i++)
    {
        scanf("%lld",&t);
        if(t%k==0)
        count++;
    }
    printf("%d",count);
    return 0;
}
