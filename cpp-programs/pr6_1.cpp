#include<iostream>
using namespace std;
class book
{
  int book_id;
  char book_name[20];
  char publisher[20];
  public:
  void get()
  {
    cout<<"Enter book id:";
    cin>>book_id;
    cout<<"Enter book name:";
    cin>>book_name;
    cout<<"Enter publisher name:";
    cin>>publisher;
  }
  void display()
  {
    cout<<"Book id:"<<book_id<<endl;
    cout<<"Book name:"<<book_name<<endl;
    cout<<"Publisher name:"<<publisher<<endl;
  }

};
int main()
{
  book* b=new book[5];
  for (int i=0;i<5;i++)
  {
    cout<<"Enter details of book "<<i+1<<":"<<endl;
    b[i].get();
  }
  for (int i=0;i<5;i++)
  {
    cout<<"Details of book "<<i+1<<":"<<endl;
    b[i].display();
  }
}