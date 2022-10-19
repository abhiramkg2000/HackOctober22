import java.util.Scanner;  
import java.lang.Math;  
public class Main
{  
//function to check if the number is Armstrong or not  
static boolean Arms(int n)   
{   
int p, git=0, last=0, s=0;   

p=n;   
  
while(p>0)    
{   
p = p/10;   
git++;   
}   
p = n;   
while(p>0)   
{   

last = p % 10;   
  
s +=  (Math.pow(last, git));   
//removes the last digit   
p = p/10;   
}  

if(n==s)   

return true;      

else return false;   
}   

public static void  main(String args[])     
{     
int number;   
Scanner sc= new Scanner(System.in);  
System.out.print("Enter the number: ");  

number=sc.nextInt();  
if(Arms(number))  
{  
System.out.print(" It is an Armstrong No ");  
}  
else   
{  
System.out.print(" It is Not Armstrong ");  
}  
}   
}  
