import java.util.*;
 class Fruits{
	public static void main(String args []){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		//input.nextLine();
		while(testcase!=0){
		int apple,orange,gold;
		int minfrute;
			apple = input.nextInt();
			orange = input.nextInt();
			gold = input.nextInt();
			if(apple==orange){
				System.out.println(apple-orange);
							
			}
			else{
			minfrute = Math.min(apple,orange);							
			while(true){
				minfrute++;
				gold--;
				if((minfrute==orange)||(minfrute==apple)||(gold==0))
				break;
				}
			int maxfruite = Math.max(apple,orange);
				System.out.println(Math.abs(minfrute-maxfruite));
			}
		testcase--;
		}
	}
} 
