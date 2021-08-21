#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    float bal;
    int amt;
    scanf("%d",&amt);
    scanf("%f",&bal);
 
 
 
       if((bal>amt+0.5)&&(amt%5==0))
       {
 
        bal=bal-amt-0.5;
       printf("%.2f\n",bal);
       }
       else
       printf("%.2f\n",bal);
 
    return 0;
}
