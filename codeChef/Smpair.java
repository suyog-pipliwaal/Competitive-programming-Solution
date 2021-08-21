import java.util.*;
 
public class Main{
	public static void main(String args []){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		while(testcase!=0){
		int n;
		n = input.nextInt();
			int [] a = new int[n];
				int sum,min;
				sum = 0;
				min = Integer.MAX_VALUE;
				for(int i = 0;i<n;i++){
					a[i] = input.nextInt();
				}
				for(int i=0;i<n;i++){
					for(int j=i+1; j<n; j++){
						//if((0<=i)&&(i<j)&&(j<=n-1)){
						//System.out.println("a["+i+"] "+ a[i]+ "a["+j+"] "+ a[j] );
							sum =  a[i] + a[j];
						//System.out.println("sum " +sum);							
							min = Math.min(sum,min);
				//			System.out.println(min);						
							//}					
					}
				} 
			System.out.println(min);
			testcase--;
		}
	}
} 
