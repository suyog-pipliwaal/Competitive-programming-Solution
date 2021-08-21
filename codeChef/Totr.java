import java.util.*;
import java.lang.*;
class Totr{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		String con = input.nextLine();
		StringBuilder sb = new StringBuilder(con);
		sb.deleteCharAt(0);
		String conversion = sb.toString();
		//System.out.println("testcase="+testcase+"conversion="+conversion);
		String character = "abcdefghijklmnopqrstuvwxyz";
		Hashtable <Character,Character> hm = new Hashtable<Character,Character>();
		for(int i = 0;i<26;i++){
			hm.put(character.charAt(i),conversion.charAt(i));
		}
		String Upperconversion = conversion.toUpperCase();
		String Uppercharacter = character.toUpperCase();
		for(int i = 0;i<26;i++){
			hm.put(Uppercharacter.charAt(i),Upperconversion.charAt(i));
		}
		hm.put('_',' ');
		hm.put('?','?');
		hm.put('!','!');
		hm.put('.','.');
		hm.put(',',',');
		hm.put(';',';');
		//System.out.println(hm);
		while(testcase!=0){
			String arr = input.nextLine();
			for(int i = 0;i<arr.length();i++){
				System.out.print(hm.get(arr.charAt(i)));
			}
			System.out.println();
			testcase--;
		}
		hm.clear();
	}
}	 
Comments 

