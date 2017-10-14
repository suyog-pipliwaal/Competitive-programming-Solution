#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,number,i,num1=0,num2;
    scanf("%d",&n);
    while(n--)
    {
 
        num1=0;
        scanf("%d",&number);
       // int a[number],count[number]={0},j;
       for(i=0;i<number;i++)
       {
           scanf("%d",&num2);
           num1=num1^num2;
 
       }printf("%d\n",num1);
 
        }
 
    //printf("Hello world!\n");
    return 0;
}
 
