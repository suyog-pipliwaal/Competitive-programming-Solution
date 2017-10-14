#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int cases, temp1=0, temp2=0, temp3=0, temp4=0,i,temp5, temp6;
    scanf("%d", &cases);
    for(i=0; i<cases; i++)
    {
             scanf("%d %d", &temp5, &temp6);
             temp1+=temp5;
             temp2+=temp6;
             if(temp1-temp2>temp4)
             {
                                  temp3=1;
                                  temp4=temp1-temp2;
             }
             else if(temp2-temp1>temp4)
             {
                  temp3=2;
                  temp4=temp2-temp1;
             }
    }
    printf("%d %d",temp3, temp4);
 
 
    //printf("Hello world!\n");
    return 0;
}
