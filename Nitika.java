import java.util.*;
import java.lang.*;
public class Main  {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int testcase = input.nextInt();
    input.nextLine();
    while(testcase!=0){
      String name = input.nextLine();
      String [] parts = name.split(" ");
      String first = "",middle = "",last = "";
      if(parts.length==1){
          first = first + Character.toUpperCase(parts[0].charAt(0));
          for(int i=1;i<parts[0].length();i++){
            first = first + Character.toLowerCase(parts[0].charAt(i));
          }
          System.out.println(first);
      }
      else if(parts.length==2){
        first = first + Character.toUpperCase(parts[0].charAt(0)) + ".";
        middle = middle +  Character.toUpperCase(parts[1].charAt(0));
        for(int i=1;i<parts[1].length();i++){
          middle = middle + Character.toLowerCase(parts[1].charAt(i));
        }
        System.out.println(first+" "+middle);
      }
      else if(parts.length==3){
        first = first + Character.toUpperCase(parts[0].charAt(0)) + ".";
        middle = middle +  Character.toUpperCase(parts[1].charAt(0)) + ".";
        last = last +  Character.toUpperCase(parts[2].charAt(0));
        for(int i=1;i<parts[2].length();i++){
        last = last + Character.toLowerCase(parts[2].charAt(i));
        }
        System.out.println(first+" "+middle+" "+last);
      }
      testcase--;
    }
  }
}
 
