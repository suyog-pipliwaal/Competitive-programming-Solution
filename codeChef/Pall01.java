import java.util.*;
 
public class Main{
	public static void main(String args []){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		input.nextLine();
		while(testcase!=0){
		String a,b;
		a = input.nextLine();
		b = "";
		int length = a.length(); 
	      for (int i = length - 1;i >= 0;i--)
          	b =  b + a.charAt(i);
 
	      	if (a.equals(b))
         	System.out.println("wins");
      		else
      	   	System.out.println("losses");
			testcase--;
		}
	}
} 
