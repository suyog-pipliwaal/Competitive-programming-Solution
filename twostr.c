
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[11],b[11];
    int n,flage=0,count2=0;
     int j,i,len1,len2;
    scanf("%d",&n);
    while(n--)
    {
        flage=0;
 
        scanf("%s\n",a);
        scanf("%s",b);
 
        len1=strlen(a);
        //len2=strlen(b);
        for(i=0;i<len1;i++)
        {
            if((a[i]==b[i])||(a[i]=='?'&&b[i]!='?')||(a[i]!='?'&&b[i]=='?'))
            flage=0;
            else
            {
                flage=1;
                break;
            }
 
        }
 
        if(flage==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
   // printf("Hello world!\n");
    return 0;
}
