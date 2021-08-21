import java.util.*;
class Lapin{
	public static void main(String [] args){
	Scanner input = new Scanner(System.in);
	int testcase = input.nextInt();
	//System.out.println("testcase:-"+testcase);
	input.nextLine();
	while(testcase!=0){
		String s1 = input.nextLine();
		final int mid = s1.length() / 2; //get the middle of the String
		String[] parts = {s1.substring(0, mid),s1.substring(mid)};
		//System.out.println(parts[0]); //first part
		//System.out.println(parts[1]); //second part
		if(s1.length()%2!=0)
		parts[1] = parts[1].substring(1);
		//System.out.println(parts[1]);
		int [] arr = new int [26];
		for(int i=0;i<26;i++)
			arr[i] = 0;
		for(int i=0;i<parts[0].length();i++)
			arr[(int)parts[0].charAt(i)-97]++;
		//	System.out.println((int)parts[0].charAt(i)-97);}
		for(int i=0;i<parts[1].length();i++)
			arr[(int)parts[1].charAt(i)-97]--;
	//	System.out.println((int)parts[0].charAt(i)-97);}
			int flage = 0;
		for(int i=0;i<26;i++){
				//System.out.println("i = "+i+" "+arr[i]);
			if(arr[i]!=0){
				flage = 1;
			System.out.println("NO");	
			break;
			}
		}
		if(flage==0)
		System.out.println("YES");
		testcase--;
	}
	}
} 
