#include<iostream>
using namespace std;
class basic_info
{
  char name[20];
  int roll;
  char gender;
  public:
  void getdata()
  {
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll number: ";
    cin>>roll;
    cout<<"Enter your gender: ";
    cin>>gender;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Age: "<<gender<<endl;
  }
};
class physical_fit : public basic_info
{
  int height;
  int weight;
  public:
  void getdata()
  {
    basic_info::getdata();
    cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your weight: ";
    cin>>weight;
  }
  void display()
  {
    basic_info::display();
    cout<<"Height: "<<height<<endl;
    cout<<"Weight: "<<weight<<endl;
  }
};
int main()
{
  physical_fit p;
  p.getdata();
  p.display();
  return 0;
}