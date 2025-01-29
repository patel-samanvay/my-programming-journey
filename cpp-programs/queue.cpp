#include<iostream>
#include<conio.h>
using namespace std;

class Queue
{
  int front,rear;
  int queue[5];

  public:
  Queue(){
    front=-1;
    rear=-1;
  }

  void insert()
  {
    int item;
    if(rear==4){
      cout<<endl<<"Queue is full"<<endl;
    }
    else{
      if(front==-1){
        front=0;}
        cout<<endl<<"Enter the value of item you want to insert in the queue:";
        cin>>item;
        queue[++rear]=item;
        cout<<endl<<"Item inserted successfully"<<endl;

      }
    
  }

  void del()
  {
    if(front==-1){
      cout<<endl<<"Queue is empty"<<endl;
    }
    else{
      cout<<endl<<"Item deleted from the queue is:"<<queue[front]<<endl;
      front++;
      if(front>rear){
        front=rear=-1;
      }
    }
  }

  void display()
  {
    int i;
    if(rear==-1){
      cout<<endl<<"Queue is empty"<<endl;
    }
    else{
      cout<<endl<<"Queue is:"<<endl;
      for(i=front;i<=rear;i++){
        cout<<queue[i]<<endl;
      }
    }
  }
};

int main()
{
  Queue q;
  int choice;
  while(1){
    cout<<endl<<"1.Insert"<<endl;
    cout<<"2.Delete"<<endl;
    cout<<"3.Display queue"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<endl<<"Enter your choice:";
    cin>>choice;
    switch(choice){
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
}