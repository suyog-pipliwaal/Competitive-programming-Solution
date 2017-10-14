import java.util.*;
class Rightri{
	public static void main(String [] args){
		Scanner input = new Scanner(System.in);
		int testcase = input.nextInt();
		int count = 0;
		while(testcase!=0){
			
			int x1,x2,x3,y1,y2,y3;
			x1 = input.nextInt();
			y1 = input.nextInt();
			
			x2 = input.nextInt();
			y2 = input.nextInt();
 
			x3 = input.nextInt();
			y3 = input.nextInt();
//			System.out.println(" x1- "+x1  + " y1- "+y1 + " x2- "+x2  +" y2- "+  y2+ " x3- "+x3 + " y3- "+y3);
			double [] side = new double[3];	
 
			side[0] = Math.sqrt( ( (x2-x1)*(x2-x1) )+ ( (y1-y2)*(y1-y2) ) );
			side[1] = Math.sqrt( ( (x1-x3)*(x1-x3) )+ ( (y1-y3)*(y1-y3) ) );
			side[2] = Math.sqrt( ( (x2-x3)*(x2-x3) )+ ( (y2-y3)*(y2-y3) ) );
			
			Arrays.sort(side);
		//	for(int i = 0;i < 3 ;i++){
		//		System.out.println("side :-"+side[i]);
		//	}
			double h = side[2];
			double p = side[1];
			double b = side[0];
			double hsquare  =  Math.round((h*h) * 100.0) / 100.0;
			double bsquare  =  Math.round((b*b) * 100.0) / 100.0;
			double psquare  =  Math.round((p*p) * 100.0) / 100.0;
			if ( hsquare==(bsquare+psquare) ){
			count++;
			}			
			testcase--;
		}
		System.out.println(count);
		count = 0;
	}
} 
Comments 

