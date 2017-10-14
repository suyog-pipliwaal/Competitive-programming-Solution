#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main()
{
    int n,num,num2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        num2=prime(num);
        if(num2==1)
        printf("yes\n");
        else
        printf("no\n");
 
    }
    //printf("Hello world!\n");
    return 0;
}
int prime(int n)
{
    int flage,i,j;
    if(n==2||n==3)
    {
        flage=1;
    }
    else if(n<=0)
    {
        flage=2;
    }
    else
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flage=2;
            break;
        }
        else
        {
          flage=1;
        }
    }
 
    }
    return flage;
}
