#include <stdio.h>
#include <math.h>
 
int main()
{
    int n;
    float b,ls,num1,num2,temp,temp1;
    scanf("%d",&n);
    while(n--)
    {
      scanf("%f %f",&b,&ls);
        num1=pow(b,2)+pow(ls,2);
        temp=sqrt(num1);
 
        num2=fabs(pow(ls,2)-pow(b,2));
        temp1=sqrt(num2);
        printf("%.5f %.5f\n",temp1,temp);
    }
    //printf("Hello world!\n");
    return 0;
}
