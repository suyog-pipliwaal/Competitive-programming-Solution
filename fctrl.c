#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int num,count=0,n,t;
scanf("%d",&t);
while(t>0)
{
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        count+=n/5;
        n=n/5;
    }
    printf("%d\n",count);
    t--;
    count=0;
}
    return 0;
}
 
