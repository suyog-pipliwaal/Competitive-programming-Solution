#include<stdio.h>
#include<stdlib.h>
int hcf(int a,int b) { 
       if(a%b==0) { 
          return b; 
       } 
       else { 
         return(hcf(b,a%b)); 
      } 
}  
int main(){
	int testcase;
	scanf("%d",&testcase);
	while(testcase--){
		int *a;
		int *b;
		int n,i;
		scanf("%d",&n);
		a = (int*)malloc(n*sizeof(int));
		b = (int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i] = a[i];
		}
		int h;
		 for(i=0;i<n-1;i++) { 
                     h=hcf(a[i],a[i+1]); 
                     a[i+1]=h; 
                } 
                    // printf("The HCF is :  %d\n",h);
		for(i=0;i<n;i++){
			printf("%d ",b[i]/h);
		}
		printf("\n");	
 
	}
return 0;
}
