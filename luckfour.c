#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,count=0,num1;
    long long int num;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&num);
        while(num!=0)
        {
            num1=num%10;
            if(num1==4)
            count++;
            num=num/10;
        }
        printf("%d\n",count);
        count=0;
    }
   // printf("Hello world!\n");
    return 0;
}
