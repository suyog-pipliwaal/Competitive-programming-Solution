#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
 
   int testcase,m,n,col,counter,i,j;
    scanf("%d",&testcase);
    while(testcase--)
    {
    counter=0;
    scanf("%d %d %d",&n,&m,&col);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=m;j++)
    {
    if((i*j)==col)
    counter++;
    }
    }
    printf("%d\n",counter);
    }
 
    return 0;
}
 
