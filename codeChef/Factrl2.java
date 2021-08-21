import java.util.*;
import java.lang.*;
import java.math.BigInteger;
class Factrl2  {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int testcase;
    testcase = input.nextInt();
    while(testcase!=0){
          int num = input.nextInt();
          fact(num);
      testcase--;
    }
 
  }
  static void fact(int num){
    BigInteger fact = new BigInteger("1");
    for(int i=1;i<=num;i++){
    fact  = fact.multiply(BigInteger.valueOf(i));
 
    }
      System.out.println(fact);
  }
 
}
