#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int n;
    //long long int count=0;
    long long int num,i;
    scanf("%lld",&n);
    while(n--)
    {
       // count=0;
        scanf("%lld",&num);
        //if(n==1)
        //count=0;
        //else
        //{
          //  for(i=1;i<num;i++)
            //{
              //  if(num%i==0)
                //count++;
            //}
        //}
        if(num%2==1)
        printf("BOB\n");
        else if(num%2==0)
        printf("ALICE\n");
    }
    //printf("Hello world!\n");
    return 0;
}
