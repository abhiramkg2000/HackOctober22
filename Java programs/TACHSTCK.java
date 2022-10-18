/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int d=sc.nextInt();
		
		int chop[]=new int[n];
		int i,pair=0;
		for(i=0;i<n;i++)
		    chop[i]=sc.nextInt();
		
		Arrays.sort(chop);    
		for(i=0;i<n-1;)
		{
		    if(chop[i+1]-chop[i]<=d)
		    {
		        pair++;
		        i+=2;
		    }
		    else    
		        i++;
		}
		System.out.println(pair);
	}
}