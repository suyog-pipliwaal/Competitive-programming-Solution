import java.util.*;
 class Horse{
	public static void main(String []  args){
		Scanner input = new Scanner(System.in);	
		int testcase = input.nextInt();
		while(testcase!=0){
			int num = input.nextInt();	
			int [] arr = new int [num];	
		for(int i = 0;i<num;i++){
			arr[i] = input.nextInt();		
		}
		 Arrays.sort(arr);
		int diff = Integer.MAX_VALUE; 
		for (int i=0; i<num-1; i++){
      		   if (arr[i+1] - arr[i] < diff)
          	     diff = arr[i+1] - arr[i];
		}
		System.out.println(diff);
		testcase--;
	}
	}
 
} 
