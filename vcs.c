#include<stdio.h>
int main(){
	int testcase,n,m,k;
	scanf("%d",&testcase);
		while(testcase--){
			scanf("%d %d %d",&n,&m,&k);
			int tracked[n],ingored[n],i,tracked_file,untracked_file,ingored_file,uningored_file,num;
			tracked_file = 0 ; untracked_file =0 ;ingored_file = 0 ;uningored_file = 0;
			for(i=0;i<n;i++){
			tracked[i] = 0;
			ingored[i] = 0;			
			}
			//printf("\n");
			for(i=0;i<m;i++){
			scanf("%d",&num);
			tracked[num-1] = 1;
			}
			//printf("\n");
			for(i=0;i<k;i++){
			scanf("%d",&num);
			ingored[num-1] = 1;
			}
 
				for(i=0;i<n;i++){
					if((tracked[i]==1)&&(ingored[i]==1))				
					tracked_file++;
					if((ingored[i]==0)&&(tracked[i]==0))
					uningored_file++;
				}
		printf("%d %d\n",tracked_file,uningored_file);
	//	printf("%d\n",uningored_file);
		}
 
return 0;
} 
