#include <stdio.h>
int pre(int);
int main()
{
     int n,i;
     int num1,num2,m,ch,sum=0;
    scanf("%d",&n);
    while(n--)
    {
 
 
        sum=0;
        scanf("%d",&num1);
        scanf("%d",&num2);
 
      for(i=num1;i<=num2;i++)
        {
                    ch=pre(i);
            if(ch==1)
            {
            sum=sum+i;
 
           }
 
 
       }
        printf("%d\n",sum);
 
 
    }
   // printf("Hello world!\n");
    return 0;
}
int pre(int num)
{
     int i,ch;
        ch=num;
        i=0;
        while(num!=0)
        {
            i=i*10+num%10;
            num=num/10;
        }
        if(i==ch)
        return 1;
        else
        return 0;
 
 
 
}
 
