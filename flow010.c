#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char id;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %c",&id);
        if(id=='B'||id=='b')
        printf("BattleShip\n");
        else if(id=='C'||id=='c')
        printf("Cruiser\n");
        else if(id=='D'||id=='d')
        printf("Destroyer\n");
        else if(id=='F'||id=='f')
        printf("Frigate\n");
 
    }
    //printf("Hello world!\n");
    return 0;
}
 
