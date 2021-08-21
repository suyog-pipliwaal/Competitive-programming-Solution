import java.util.*;
import java.lang.*;
class Rrcopy{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		while(testcase!=0){
			int size = input.nextInt();
			int [] arr = new int[size];
			for (int i = 0;i<size;i++)
				arr[i] = input.nextInt();
			HashSet<Integer> hm = new HashSet<Integer>();
			int count = 0;
			for (int i = 0;i<size;i++){
				if (hm.add(arr[i]))
				count++;
			}
			System.out.println(count);	
		testcase--;
		}
	}
}	 
