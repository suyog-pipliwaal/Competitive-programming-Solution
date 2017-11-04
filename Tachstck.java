import java.util.*;
import java.lang.*;
class Tachstck{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		int diff = input.nextInt();
		int [] arr = new int[size];
		for(int i = 0;i<size;i++){
			arr[i] = input.nextInt();
		}
		Arrays.sort(arr);
		int count = 0;
		for(int i=0;i<size-1;){
			if(Math.abs(arr[i]-arr[i+1])<=diff){
				count++;
				i = i+2;
			}
			else{
				i++;
			}
		}
		System.out.println(count);
		
	}
}
