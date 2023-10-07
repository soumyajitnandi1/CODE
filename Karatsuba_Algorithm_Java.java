import java.util.*;
public class karatsuba{
    public static long helper(long x,long y){
        if(x<10&&y<10)
        return x*y;
        long n=Math.max(String.valueOf(x).length(),String.valueOf(y).length());
        long n2=n/2;
        long a=x/(long)Math.pow(10,n2);
        long b=x%(long)Math.pow(10,n2);
        long c=y/(long)Math.pow(10,n2);
        long d=y%(long)Math.pow(10,n2);
        long ac=helper(a,c);
        long bd=helper(b,d);
        long ad_plus_bc=helper(a+b,c+d)-ac-bd;
        long result=ac*(long)Math.pow(10,2*n2)+ad_plus_bc*(long)Math.pow(10,n2)+bd;
        return result;
     
    }
   
    public static void main (String args[]){
        Scanner sc=new Scanner(System.in);
        long x=sc.nextLong();
        long y=sc.nextLong();
        long product=helper(x,y);
        System.out.println(product);
    }
}
