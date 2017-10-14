#include <stdio.h>
#include <stdlib.h>
 
int main()
{
     int n,num1,num2;
    scanf("%d",&n);
    int max[n],i,j=0;
    j=0;
    for(j=0;j<n;j++)
    {
        max[j]=0;
        scanf("%d%d",&num1,&num2);
        for(i=1;i<=num2;i++)
        {
            if(max[j]<(num1%i))
            max[j]=num1%i;
        }
        printf("%d\n",max[j]);
 
    }
   // printf("Hello world!\n");
    return 0;
}
