#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    float hardness,carbon,tensile;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%f%f%f",&hardness,&carbon,&tensile);
        if(hardness>50&&carbon<0.7&&tensile>5600)
        printf("10\n");
        else if(hardness>50&&carbon<0.7)
        printf("9\n");
        else if(carbon<0.6&&tensile>5600)
        printf("8\n");
        else if(hardness>50&&tensile>5600)
        printf("7\n");
        else if(hardness>50||carbon<0.7||tensile>5600)
        printf("6\n");
        else
        printf("5\n");
    }
   // printf("Hello world!\n");
    return 0;
}
 
