#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int i,num;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        a[i]=sqrt(num);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   // printf("Hello world!\n");
    return 0;
}
