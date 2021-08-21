import java.util.*;
 
class Flow017{
	public static void main(String args []){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		while(testcase!=0){
		int [] a = new int[3];
			for(int i=0;i<3;i++){
				a[i] = input.nextInt();
			}
			Arrays.sort(a);
			System.out.println(a[1]);
			testcase--;
		}
	}
} 
