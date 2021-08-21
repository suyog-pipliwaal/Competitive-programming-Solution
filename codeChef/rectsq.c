#include <stdio.h>
#include <stdlib.h>
int hcf(int,int);
int main()
{
    int n;
    int side_1,side_2,hcf1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&side_1,&side_2);
        hcf1=hcf(side_1,side_2);
        printf("%d\n",side_1*side_2/(hcf1*hcf1));
    }
   // printf("Hello world!\n");
    return 0;
}
int hcf(int num1,int num2)
{
    int s;
    while(num1%num2>0)
    {
        s=num1;
        num1=num2;
        num2=s%num2;
    }
    return num2;
}
 
