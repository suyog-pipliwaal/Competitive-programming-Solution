import java.util.*;
	 class Dividing{
		public static void main(String [] args){
			Scanner input = new Scanner(System.in);
			int size = input.nextInt();
			int sum = 0,stamp;
			for(int i = 0;i<size;i++){
				stamp = input.nextInt();
				sum = sum+stamp;		
			}
			size = ( (size)*(size+1) )/2;
			if(sum == size)
			System.out.println("YES");
			else
			System.out.println("NO");
		}
	} 
