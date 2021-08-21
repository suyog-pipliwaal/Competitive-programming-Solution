#include<stdio.h>
// #include<stdlib.h>
// #include <limits.h>
int main(){
  // printf("Storage size for int : %lu \n", sizeof(int));
  long int testcase,n;
  scanf("%ld",&testcase);
  while(testcase--){
    scanf("%ld",&n);
    long int a[n],i;
    for(i=0;i<n;i++){
      scanf("%ld",&a[i]);
    }
  long int min = a[0];
    for(i=0;i<n;i++){
      if(min>a[i])
      min = a[i];
    }
    printf("%ld\n",min*(n-1));
  }
  return 0;
}
 
