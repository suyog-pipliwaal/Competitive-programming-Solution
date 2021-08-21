#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,count=0,count1=0,len,i;
    char a[200],b[200];
    scanf("%d",&n);
    while(n--)
    {
        count=0;count1=0;
        scanf("%s\n",a);
        scanf("%s",b);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='?'||b[i]=='?')
            count++;
            else if(a[i]!=b[i]&&a[i]!='?'){
            count1++;
            count++;}
        }
        printf("%d %d\n",count1,count);
 
    }
    //printf("Hello world!\n");
    return 0;
}
