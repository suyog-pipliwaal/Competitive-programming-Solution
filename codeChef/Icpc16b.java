import java.util.*;
//import java.lang.*;
class Icpc16b{
	public static void main(String [] args){
	Scanner input = new Scanner(System.in);
	int testcase;
	testcase = input.nextInt();
	while(testcase!=0){
		int n = input.nextInt();
		int [] array = new int[n];
			for(int i=0;i<n;i++){
				array[i] = input.nextInt();		
			}
		Arrays.sort(array);
	//		beautifularray(array,n);
			if(beautifularray(array,n))
			System.out.println("yes");
			else
			System.out.println("no");			
			testcase--;
		}
	}
	static boolean beautifularray(int [] array,int n){
			for(int i = 0;i < n;i++){
				if(array[i]!=0&&array[i]!=1)
				for(int j = i+1;j < n;j++){
					int num = array[i]*array[j];
					int index = Arrays.binarySearch(array,num);
					//System.out.println(" num:- "+num+" index:- "+index);
					if(index<0)
					return false;	
				}
			}
			return true;
		}
}
