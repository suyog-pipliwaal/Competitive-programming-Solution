#include<stdio.h>
#include <math.h>
int main(){
  int testcase,n;
  scanf("%d",&testcase);
  while(testcase--){
    int p,a;
    scanf("%d%d",&p,&a);
    // printf("%d\n",a );
    float x1=0,y1=0,x2=0,y2=0,v1=0,v2=0;
    x1 = (p+sqrt(p*p-24*a))/12;
    // printf("%f\n",x1 );
    y1 = (p/4)-2*x1;
    // printf("%f\n", y1);
    x2 = (p-sqrt(p*p-24*a))/12;
    y2 = (p/4)-2*x2;
    if(x1<y1)
    v1 = x1*x1*y1;
    v2 = x2*x2*y2;
    // printf("%f\n",v2 );
    if(v1>v2)
    printf("%.2f\n",v1);
    else
    printf("%.2f\n",v2);
 
  }
 
 
  return 0;
}
 
