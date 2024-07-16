import java.util.*;
public class bnb{
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        // float radius=sc.nextFloat();
        // float pi=22.0f/7.0f;
        // float res=pi*radius*radius;
        // System.out.println("The area of the circle is "+String.format("%.2f",res)+".");



 int n=sc.nextInt();
 for(int i=n;i>0;i--){
    for(int j=n;j>=n-i+1;j--){
        System.out.print(j+ " "); 
    }
    System.out.println();
 }
// String binary=Integer.toBinaryString(n);
// String octal=Integer.toOctalString(n);
// String hex=Integer.toHexString(n);
// System.out.println(binary);
// System.out.println(octal);
// System.out.println(hex);
// System.out.println(Integer.valueOf(n).byteValue());
// System.out.println(Integer.valueOf(n).shortValue());
// System.out.println(Integer.valueOf(n).doubleValue());
// System.out.println(Integer.valueOf(n).intValue());
// System.out.println(Integer.valueOf(n).longValue());


// String bi=sc.next();
// String oi=sc.next();
// String hi=sc.next();
// int binary=Integer.parseInt(bi,2);
// int octal=Integer.parseInt(oi,8);
// int hex=Integer.parseInt(hi,16);
// System.out.println(binary);
// System.out.println(octal);
// System.out.println(hex);



    }
}