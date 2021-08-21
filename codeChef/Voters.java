import java.util.*;
import java.lang.*;
public class Main{
	public static void main(String [] args){
	Scanner input = new Scanner(System.in);	
		int num1 = input.nextInt();
		int num2 = input.nextInt();
		int num3 = input.nextInt();
		int [] arr1 = new int [num1];
		int [] arr2 = new int [num2];
		int [] arr3 = new int [num3];
 		Set<Integer> set = new HashSet<Integer>();
			for(int i=0;i<num1;i++){
			arr1[i] = input.nextInt();
			}
			for(int i=0;i<num2;i++){
			arr2[i] = input.nextInt();
			}
			for(int i=0;i<num3;i++){
			arr3[i] = input.nextInt();
			}
			/*for(int i=0;i<num1;i++){
			System.out.println("arr1["+i+"] = "+arr1[i]);
			}
			for(int i=0;i<num2;i++){
			System.out.println("arr2["+i+"] = "+arr2[i]);
			}
			for(int i=0;i<num3;i++){
			System.out.println("arr3["+i+"] = "+arr3[i]);
			}*/
		try{
			for(int i=0;i<num1;i++){
				int st1 = Arrays.binarySearch(arr2,arr1[i]);
				int st2 = Arrays.binarySearch(arr3,arr1[i]);
				//System.out.println("st1 = "+st1+"\n"+"st2 = " + st2);
				if((st1>=0)||(st2>=0))
					set.add(arr1[i]);
			}
				for(int i=0;i<num2;i++){
				int st3 = Arrays.binarySearch(arr1,arr2[i]);
				int st4 = Arrays.binarySearch(arr3,arr2[i]);
				if((st3>=0)||(st4>=0))
					set.add(arr2[i]);
			}
				for(int i=0;i<num3;i++){
				int st5 = Arrays.binarySearch(arr2,arr3[i]);
				int st6 = Arrays.binarySearch(arr1,arr3[i]);
				if((st5>=0)||(st6>=0))
					set.add(arr3[i]);
			}
			System.out.println((Integer)set.size());
			List<Integer> list = new ArrayList<Integer>(set);
			Collections.sort(list);
			//System.out.println(list);
			for(Integer intVal:list){
			System.out.println(intVal.intValue());
			}			
		}
		catch(Exception e){}
 
	}
} 
