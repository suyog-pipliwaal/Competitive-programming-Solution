import java.util.*;
	class Chn09{
		public static void main(String args []){
			Scanner input = new Scanner(System.in);
			int testcase = input.nextInt();
			input.nextLine();
				while(testcase!=0){
					String color = input.nextLine();
						int a,b;
						a=0;b=0;
						for(int i=0;i<color.length();i++){
							if(color.charAt(i)=='a')
								a++;
							else if(color.charAt(i)=='b')
								b++;						
						}
					System.out.println(Math.min(a,b));
					testcase--;
				}
		}
		
	} 
