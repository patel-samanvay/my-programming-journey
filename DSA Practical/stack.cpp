#include<iostream> 
using namespace std; 
class Stack 
{ 
int stack[5]; 
public: 
int top; 
Stack()  
{ 
top=-1; 
} 
void push() 
{ 
int item;
    if(top==4) 
    { 
      cout<<endl<<"Stack is full"<<endl; 
    } 
    else{ 
      cout<<endl<<"Enter item to push:"; 
      cin>>item; 
      top++; 
      stack[top]=item; 
    } 
  } 
 
  void pop() 
  { 
    if(top==-1) 
    { 
      cout<<endl<<"Stack is empty"<<endl; 
    } 
    else{ 
      cout<<"Item popped is:"<<stack[top]<<endl; 
      top--; 
    } 
  } 
 
    void peep() 
    { 
      int pos; 
      if(top==-1) 
      { 
        cout<<endl<<"Stack is empty"<<endl; 
      } 
      else 
      { 
        cout<<"Enter the position of element you want to peep with respect to top:"; 
        cin>>pos; 
        if(pos>top) 
        { 
          cout<<"Invalid position"<<endl; 
        } 
        else 
        { 
          cout<<"Element at position "<<pos<<" is:"<<stack[top-pos]<<endl; 
        } 
      } 
    } 
     
    void change() 
    { 
      int pos; 
      cout<<"Enter the position of element you want to change with respect to top:"; 
      cin>>pos; 
      if(pos>top) 
      { 
        cout<<"Invalid position"<<endl; 
      } 
      else 
      { 
        cout<<"Enter the new value:"; 
        cin>>stack[top-pos]; 
        cout<<"Value changed"<<endl; 
      } 
    }    
}; 
 
int main() 
{ 
  int i,item,top; 
  Stack s1; 
  while(1) 
  { 
    cout<<endl<<"Enter 1 to push"<<endl<<"Enter 2 to pop"<<endl<<"Enter 3 to peep"<<endl<<"Enter 4 to change"<<endl<<"Enter 5 to exit"<<endl<<"Enter your choice:"; 
    cin>>i; 
    switch(i) 
    { 
      case 1: 
      s1.push(); 
      break; 
      case 2: 
      s1.pop(); 
      break; 
      case 3: 
      s1.peep(); 
      break; 
      case 4: 
      s1.change(); 
      break; 
      case 5: 
      exit(0); 
      default: 
      cout<<"Invalid choice"<<endl; 
    } 
     
  } 
  return 0; 
} 