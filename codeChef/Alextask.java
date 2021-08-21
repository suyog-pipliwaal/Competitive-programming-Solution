import java.util.*;
import java.lang.*;
import java.io.*;
class Alextask{
static int gcd(int x,int y){
        int a;
        a = (x > y) ? x : y; // a is greater number
        while(true)
        {
            if(a%x==0&&a%y==0)
                return a;
            ++a;
        }	
 
}
public static void main(String [] agrs) throws Exception{
	Scanner input = new Scanner(System.in);
 
int testcase = input.nextInt();
 
//scanf("%d",&testcase);
	while(testcase!=0){
	testcase--;
	int size_of_array,i,k,min,max;
	size_of_array = input.nextInt();
 
	int []array=new int[size_of_array];
		int [] a=new int[size_of_array*size_of_array];
 
	for(i=0;i<size_of_array;i++)
	array[i] = input.nextInt();
 
	int index = 0;
 
	for(i=0;i<size_of_array;i++){
	  for(int j=i+1;j<size_of_array;j++){
		a[index]=gcd(array[i],array[j]);
		index++;
		}
		
	}
	 max = Integer.MAX_VALUE;	
	for( i=0;i<index;i++){
	//System.out.println("a[" + i +"]"+ "=" + a[i]);
	max=Math.min(max, a[i]);
	}
	
	System.out.println(max);
	}
//printf("%d\n",gcd(1,3));
}
} 
