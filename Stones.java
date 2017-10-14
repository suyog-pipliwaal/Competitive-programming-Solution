import java.util.*;
import java.lang.*;
class Stones{
	public static void main(String [] args){
	Scanner input = new Scanner(System.in);	
		int testcase = input.nextInt();
		input.nextLine();
		while(testcase!=0){
		String str1 = input.nextLine();
		String str2 = input.nextLine();
		Set<Character> set = new HashSet<Character>();
		for(int i=0;i<str1.length();i++){
		set.add(str1.charAt(i));
		}
		int count = 0;
		for(int i=0;i<str2.length();i++){
			if(set.contains(str2.charAt(i)))
				count++;
		}
		System.out.println(count);
		set.clear();
		//count = 0;
		testcase--;
		}
	}
} 
