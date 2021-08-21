#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num1,num2,last,diff;
    scanf("%d%d",&num1,&num2);
    last=(num1-num2)%10;
    if(last<9)
    printf("%d",(num1-num2)+1);
    else
    printf("%d",(num1-num2)-1);
    //printf("Hello world!\n");
    return 0;
}
