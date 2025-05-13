#include<iostream> 
using namespace std; 
class c_queue 
{ 
int front,rear; 
int queue[5]; 
public: 
c_queue() 
{ 
front=-1; 
rear=-1; 
} 
void insert() 
{ 
int item; 
if((front==0 && rear==4) || (rear==front-1)) 
{ 
  cout<<endl<<"Queue is full"<<endl; 
} 
    else 
    { 
      if(front==-1) 
      { 
        front=0; 
      } 
      cout<<endl<<"Enter the value of item you want to insert in the queue:"; 
      cin>>item; 
      if(rear==4 && front!=0) 
      { 
        rear=0; 
      } 
      else if(rear==front-1) 
      { 
        rear=0; 
      } 
      else 
      { 
        rear++; 
      } 
      queue[rear]=item; 
      cout<<endl<<"Item inserted successfully"<<endl; 
    } 
  } 
  void del() 
  { 
    if(rear==-1) 
    { 
      cout<<endl<<"Queue is empty"<<endl; 
    } 
    else 
    { 
      cout<<endl<<"Item deleted from the queue is:"<<queue[front]<<endl; 
      if(front==rear) 
      { 
        front=rear=-1; 
      } 
      else 
      { 
        if(front==4) 
        { 
          front=0; 
        } 
        else 
        { 
          front++; 
        } 
      } 
    } 
  } 
  void display() 
  { 
    int i; 
    if(front==-1) 
    { 
      cout<<endl<<"Queue is empty"<<endl; 
    } 
    else 
    { 
      cout<<endl<<"Queue is:"<<endl; 
      if(front<=rear) 
      { 
        for(i=front;i<=rear;i++) 
        { 
          cout<<queue[i]<<endl; 
        } 
      } 
      else 
      { 
        for(i=front;i<=4;i++) 
        { 
          cout<<queue[i]<<endl; 
        } 
        for(i=0;i<=rear;i++) 
        { 
          cout<<queue[i]<<endl; 
        } 
      } 
    } 
  } 
}; 
int main() 
{ 
  c_queue q; 
  int ch; 
  while(1) 
  { 
    cout<<endl<<"1.Insert"<<endl<<"2.Delete"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl; 
    cout<<endl<<"Enter your choice:"; 
    cin>>ch; 
    switch(ch) 
    { 
      case 1: 
        q.insert(); 
        break; 
      case 2: 
        q.del(); 
        break; 
      case 3: 
        q.display(); 
        break; 
      case 4: 
        exit(0); 
      default: 
        cout<<endl<<"Invalid choice"<<endl; 
    } 
  } 
  return 0; 
};