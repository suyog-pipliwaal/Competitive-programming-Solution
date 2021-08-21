#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,count=0,i=0;
    char a[115];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        i=0;
        count=0;
        while(a[i]!='\0')
        {
            if(a[i]=='A'||a[i]=='D'||a[i]=='P'||a[i]=='O'||a[i]=='R'||a[i]=='Q')
            count++;
            else if(a[i]=='B')
            count=count+2;
            i++;
        }
        printf("%d\n",count);
    }
   // printf("Hello world!\n");
    return 0;
}
 
