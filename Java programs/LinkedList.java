//This is a basic Java program which shows the basic implementation and basic operation of LinkedList 
//Like array linked list is also used to store a block of elements in the memory but it does not have continuous memory blocks
//LinkedList takes size dynamically
public class LinkedList {

	//this class Node is used for the basic structure of any node in the linkedlist having node and next pointer 
	static class Node
	{
		int data;
		Node next;
			
		Node(int data)
		{
			this.data=data;
			this.next=null;
		}
	};
	LinkedList.Node head;
	
	//insertAtFirst function inserts the element at the head(starting) of the linkedlist
	public void insertAtFisrt(int data)
	{
		Node newNode = new Node(data);
		newNode.next=head;
		head=newNode;
	}
	
	//insertAtTail function inserts the node at the tail(end) of the linked list
	public void insertAtTail(int data)
	{ 
		
		Node temp=new Node(data);
				
		if(head==null)
		{
			head=temp;
			return;
		}
		Node ptr=head;
		while(ptr.next!=null)
			ptr=ptr.next;
		ptr.next=temp;
	}
	
	//inserAtMiddle function inserts node at any posotion specified
	public void insertAtMiddle(int data,int position)
	{
	   Node temp=new Node(data);
	   Node ptr=head;
	   
	   while(position-1>1)
	   {
		   ptr=ptr.next;
		   position--; 
	   }
	   temp.next=ptr.next;
	   ptr.next=temp;
	}
	
	//display function is used to display the elements of the linkedlist
	public void display()
	{
		Node temp=head;
		while(temp!=null)
		{			
			System.out.print(temp.data + " ");
			temp=temp.next;
		}
	}
	
	//removebeg function is used to remove or delete element from the head or beginning of the linkedlist
    public void removebeg()
    {
    	Node temp;
    	temp=head;
    	temp=null;
    	head=head.next;  	
    }
    
    //removeend function is used to remove or delete element from th ened or the tail from the linkedlist
    public void removeend()
    {
    	Node temp=head;
    	while(temp.next.next!=null)
    		temp=temp.next;
    	temp.next=null;
    }
    
    //removeAt function is used to remove or delete element from any specified position of the LinkedList 
    public void removeAt(int position)
    {
    	Node temp=head;
    	while(position-1>1)
    	{
    		temp=temp.next;
    		position--;
    	}
    	Node ptr=temp.next;
    	temp.next=temp.next.next;
    	ptr.next=null;
        ptr=null;
    }
	
	public static void main(String[] args) {
		
		
		//this allocates memory to the node of the linkedlist
         LinkedList ll = new LinkedList();
         ll.insertAtTail(2);
         ll.insertAtFisrt(0);
         ll.insertAtMiddle(1, 2);
         ll.insertAtTail(4);
         ll.insertAtFisrt(-1);
         ll.insertAtMiddle(7, 4);
         ll.removebeg();
         ll.removeend();
         ll.removeAt(2);
         ll.display();
	}

}


