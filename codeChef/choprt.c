#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int n;
    long long int num1,num2;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&num1,&num2);
        if(num1>num2)
        printf(">\n");
        else if(num1<num2)
        printf("<\n");
        else if(num1==num2)
        printf("=\n");
    }
    //printf("Hello world!\n");
    return 0;
}
