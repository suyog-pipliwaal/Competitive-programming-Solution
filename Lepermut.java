import java.util.*;
import java.lang.*;
public class Main{
	public static void main(String [] args){
	Scanner input = new Scanner(System.in);	
		int testcase = input.nextInt();
		input.nextLine();
		while(testcase!=0){
		int number = input.nextInt();
		int [] arr = new int[number];
		for(int i=0;i<number;i++){
			arr[i] = input.nextInt();
		}
		int inversion = 0;
		int local_inversion = 0;
			for(int i=0;i<number;i++){		
				for(int j=0;j<number;j++){
					if((i<j)&&(arr[i]>arr[j]))
					inversion++;
				}
			}
		for(int i=0;i<number-1;i++){
			if(arr[i]>arr[i+1])
			local_inversion++;
		}
		if(inversion==local_inversion)
		System.out.println("YES");
		else
		System.out.println("NO");
		testcase--;
		}
	}
} 
