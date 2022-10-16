#include<iostream>
using namespace std;

class stack
{
    public:
    int data;
    stack *next;
};

stack *push(stack *top,int d)
{
    stack *temp=new stack;
    if(temp==NULL)
    {
    cout<<"Overflow"<<endl;
    }
    else
     {
        temp->data=d;
        temp->next=top;
        top=temp;
     }
     return top;
}

stack *pop(stack *top)
{
    if(top==NULL)
    {
        cout<<"UnderFlow";
    }
    else
    {
        stack *temp=top;
        top=top->next;
        delete(temp);
    }
    return top;
}

int topElement(stack top)
{
   return top.data;
}

void Display(stack *top)
{
    stack *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    stack *top=NULL;
    int flag=0;
    while(true)
    {
      cout<<"Choose the Option :\n1. Push\n2. Pop\n3. Top Element\n4. Updated List\n5. Exit"<<endl;
      int ch;
      cin>>ch;
      switch(ch)
      {
      case 1:
          {
            int data;
            cin>>data;
            top=push(top,data);
            cout<<"Updated List :";
            Display(top);
            cout<<endl;
          } 
          break;
      case 2:
          {
              top=pop(top);
              cout<<"Updated List : ";
              Display(top);
              cout<<endl;
          }
          break;
      case 3:
        {
            cout<<topElement(*top)<<" is an Top Element"<<endl;
        }
        break;

      case 4:
        {
            cout<<"Updated List : ";
            Display(top);
            cout<<endl;
        }
        break;

      default:
          cout<<"Bye"<<endl;
          flag=1;
          break;
      }
      if(flag==1)
      {
          break;
      }
    }

}