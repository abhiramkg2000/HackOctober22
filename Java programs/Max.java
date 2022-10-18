// To find the greatest number without using condition/ternary statements
import java.util.*;
public class max
{
  public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int x=0,y=0;
        System.out.print("Enter the first number : ");
        x=sc.nextInt();
        System.out.print("Enter the second number : ");
        y=sc.nextInt();
        while((x-y > y-x)== true)
        {
            System.out.println("Maximum among two numbers = "+x);
            break;
        }
        while((y-x > x-y) == true )
        {
            System.out.println("Maximum among two numbers = "+y);
            break;
        }
    }
}
