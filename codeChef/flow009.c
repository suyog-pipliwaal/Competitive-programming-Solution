#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long int n;
    long long int  qua,price;
    double total;
    scanf("%ld",&n);
    for(;n>0;n--)
    {
        scanf("%lld %lld",&qua,&price);
        total=qua*price;
        if(qua>1000)
        total=total-total*0.1;
        printf("%lf\n",total);
    }
 
   // printf("Hello world!\n");
    return 0;
}
