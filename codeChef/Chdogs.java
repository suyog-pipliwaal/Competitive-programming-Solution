import java.math.*;
import java.util.Scanner;
class Chdogs {
 
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int testcase = input.nextInt();
	while(testcase!=0)
	{
           BigDecimal two = new BigDecimal("2");
            BigDecimal three = new BigDecimal("3");
	BigDecimal d = input.nextBigDecimal();
	BigDecimal v = input.nextBigDecimal();
        d = d.multiply(two);
        v  = v.multiply(three);
        d = d.divide(v,9,RoundingMode.HALF_UP);
        System.out.println(d);
        
	testcase--;
	}
    }
 
    
}
 
