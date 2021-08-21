import java.util.*;
class Johny{
	public static void main(String []  args){
		Scanner input = new Scanner(System.in);	
		int testcase = input.nextInt();
		while(testcase!=0){
			int num = input.nextInt();	
			int [] arr = new int [num];	
		for(int i = 0;i<num;i++){
			arr[i] = input.nextInt();		
		}
		int index = input.nextInt();
		int song = arr[index-1];
		 Arrays.sort(arr);
		//int diff = Integer.MAX_VALUE; 
		for (int i=0; i<num; i++){
      		   if (arr[i] == song){
          	     System.out.println(i+1);
			break;}
		}
		//System.out.println(diff);
		testcase--;
	}
	}
 
} 
