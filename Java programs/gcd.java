import java.util.*;
public class gcd
{
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    int b=sc.nextInt();
    int temp=0,r=0;
    System.out.print("GCD of "+a+" and "+b+" is : ");
    if(a>b)
    {
      temp=a;
      a=b;
      b=temp;
    }
    while(b%a!=0)
    {
      r=b%a;
      b=a;
      a=r;
    }
    System.out.println(a);
  }
}
