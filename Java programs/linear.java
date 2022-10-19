/* Java program of Linear Search */

import java.util.Scanner;  
   
class Main  
{  
  public static void main(String args[])  
  {  
    int L, n, srch, arr[];  
   
    Scanner in = new Scanner(System.in);  
    System.out.println("Enter number of elements");  
    n = in.nextInt();   
    arr= new int[n];  
   
    System.out.println("Enter those " + n + " elements");  
   
    for (L = 0; L < n; L++)  
      arr[L] = in.nextInt();  
   
    System.out.println("Enter value to find");  
    srch = in.nextInt();  
   
    for (L = 0; L < n; L++)  
    {  
      if (arr[L] == srch)     /* Searching element is present */  
      {  
         System.out.println(srch + " is present at location " + (L + 1) + ".");  
          break;  
      }  
   }  
   if (L == n)  /* Element to search isn't present */  
      System.out.println(srch + " isn't present in array.");  
  }  
}  
