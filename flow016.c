#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num1,num2,temp1,temp2,t,l;
    float lcm;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d", &num1, &num2);
        temp1=num1;
        temp2=num2;
        while(num1!=num2)
        {
            if(num1>num2)
            num1=num1-num2;
            else
            num2=num2-num1;
          }
          l=(temp1*temp2)/num1;
           printf("%d %d\n",num1,l);
        }
 
 
 
//  printf("%d %d\n",gcd,lcm);
 // printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
 
//printf("Hello world!\n");
    return 0;
}
 
