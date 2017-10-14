#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,num1,even,odd,i;
    scanf("%d",&n);
    even=0;
    odd=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num1);
        if(num1%2==0)
        even++;
        else if(num1%2!=0)
        odd++;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
 
    return 0;
}
