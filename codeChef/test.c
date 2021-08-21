#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a[5];
    int n,i,k=1,num;
    for(i=0;i<k;i++)
    {
        scanf("%d\n",&n);
        a[i]=n;
        if(n!=42)
        {
            printf("\n%d\n",a[i]);
            k++;
        }
        else
        break;
 
    }
    return 0;
}
 
