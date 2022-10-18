/*Combination Sum is a problem in which we are given an array 'arr[]' of 'n' distinct elements and an integer 'x' 
The task is to find all unique combinations of elements in arr[] that add up to x.
 
 For example : 
 if n = 3 
 arr[] = {1,2,3}
 x = 3
 
 The possible output produced will be :
 [2,1]
 [1,1,1]
 [3]

Array is implemented using Java ArrayList in this program.

Recursive approach is used to solve this problem to find all possible unique combinations of sum .
*/
import java.util.*;			//For Scanner Class

public class CombinationSum {		//Method to find all possible combinations of sum in list
	
	public void printSubWithSum(int index,int target,List<Integer> sub,List<List<Integer>> ans,List<Integer> arr,int n) {
		
		if(index >= n) {
			
			if(target == 0) {
				
				if(sub.size() == 0)
					ans.add(new ArrayList<>());
				
				ans.add(new ArrayList<>(sub));
			}
			return ;
		}
		
		if((target-arr.get(index)) >= 0) {
			
			sub.add(arr.get(index));
			printSubWithSum(index,target-arr.get(index),sub,ans,arr,n);	//Recursion
			sub.remove(sub.size()-1);
		}
		printSubWithSum(index+1,target,sub,ans,arr,n);	//Recursion
	}
	

	public static void main(String[] args) {		//Main method
		
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of array : ");
		int n;
		n = sc.nextInt();
		
		List<Integer> arr = new ArrayList<Integer>(n);
		
		System.out.println("Enter array elements : ");
		for(int i=0;i<n;i++)
			arr.add(sc.nextInt());
		
		int target;
		
		System.out.println("Enter the integer for which you want generate the combinations of sum : ");
		target = sc.nextInt();
		
		List<List<Integer>> ans = new ArrayList<>();
		List<Integer> sub = new ArrayList<>();
		
		CombinationSum obj = new CombinationSum();
		obj.printSubWithSum(0,target,sub,ans,arr,n);	//Function Calling
		
		System.out.println("All possible combinations porducing sum "+target+" in array is  : ");
		ans.forEach(System.out::println);

		sc.close();

	}

}