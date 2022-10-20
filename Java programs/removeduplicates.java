/* java program of remove duplicates from single linked list */
public class Main {  
  
    
    class Node{  
        int ta;  
        Node se;  
  
        public Node(int ta) {  
            this.ta = ta;  
            this.se = null;  
        }  
    }  
  
    
    public Node head = null;  
    public Node tail = null;  
  

    public void addNode(int ta) {  
    
        Node newNode = new Node(ta);  
  
        
        if(head == null) {  
            
            head = newNode;  
            tail = newNode;  
        }  
        else {  
            
            tail.se = newNode;  
        
            tail = newNode;  
        }  
    }  
  
    
    public void removeDuplicate() { 
        
        Node current = head, index = null, c = null;  
  
        if(head == null) {  
            return;  
        }  
        else {  
            while(current != null){  
                
                c= current;  
                
                index = current.se;  
  
                while(index != null) {  
                    
                    if(current.ta == index.ta) {  
                        
                        c.se = index.se;  
                    }  
                    else {  
        
                        c= index;  
                    }  
                    index = index.se;  
                }  
                current = current.se;  
            }  
        }  
    }  
  
      
    public void display() {  
        
        Node current = head;  
        if(head == null) {  
            System.out.println("List is empty");  
            return;  
        }  
        while(current != null) {  
            
            System.out.print(current.ta + " ");  
            current = current.se;  
        }  
        System.out.println();  
    }  
  
    public static void main(String[] args) {  
  
        Main msli = new Main();  
  
        //Adds data to the list  
        msli.addNode(1);  
        msli.addNode(2);  
        msli.addNode(3);  
        msli.addNode(2);  
        msli.addNode(2);  
        msli.addNode(4);  
        msli.addNode(1);  
  
        System.out.println("Originals list: ");  
        msli.display();  
  
    
        msli.removeDuplicate();  
  
        System.out.println("List after removing duplicates: ");  
        msli.display();  
    }  
}  
