/* Java program to implement basic stack operations */

class Stack {
	static final int MAX = 1000;
	int tp;
	int ss[] = new int[MAX]; 

	boolean isEmp()
	{
		return (tp < 0);
	}
	Stack()
	{
		tp = -1;
	}

	boolean push(int pp)
	{
		if (tp >= (MAX - 1)) {
			System.out.println("Stack Overflow");
			return false;
		}
		else {
			ss[++tp] = pp;
			System.out.println(pp + " pushed into stack");
			return true;
		}
	}

	int pop()
	{
		if (tp < 0) {
			System.out.println("Stack Underflow");
			return 0;
		}
		else {
			int pp= ss[tp--];
			return pp;
		}
	}

	int peek()
	{
		if (tp < 0) {
			System.out.println("Stack Underflow");
			return 0;
		}
		else {
			int pp = ss[tp];
			return pp;
		}
	}
	
	void print(){
	for(int i = tp;i>-1;i--){
	System.out.print(" "+ ss[i]);
	}
}
}

class Main {
	public static void main(String args[])
	{
		Stack s = new Stack();
		s.push(10);
		s.push(20);
		s.push(30);
		System.out.println(s.pop() + " Popped from stack");
		System.out.println("Top element is :" + s.peek());
		System.out.print("Elements present in stack :");
		s.print();
	}
}
