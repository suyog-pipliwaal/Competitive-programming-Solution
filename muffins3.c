#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int cup,boxsize,min=0,cup1;
    scanf("%d",&cup);
    int i,diff;
    for(i=0;i<cup;i++)
    {
        scanf("%d",&boxsize);
           // boxsize=abs(cup-boxsize);
 
 
        printf("%d\n",(boxsize/2)+1);
 
    }
 
    return 0;
}
