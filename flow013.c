#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    int angle_A,angle_B,angle_C;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&angle_A,&angle_B,&angle_C);
        if(angle_A>0&&angle_A<180&&angle_B>0&&angle_B<180&&angle_C>0&&angle_C<180)
        {
            if(angle_A+angle_B+angle_C==180)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        printf("NO\n");
    }
   // printf("Hello world!\n");
    return 0;
}
