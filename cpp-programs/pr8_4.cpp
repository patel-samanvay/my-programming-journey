#include<iostream>
using namespace std;
class student
{
  int roll;
  char name[20];
  public:
  void getdata()
  {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>roll;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
  }  
};
class exam : public student
{
  public:
  int marks[6], total;
  void getdata()
  {
  student::getdata();
  cout<<"Enter marks in 6 subjects: ";
  for(int i=0; i<6; i++)
  {
    cin>>marks[i];
    total += marks[i];
  }
  }
  void display()
  {
    student::display();
    cout<<"Marks: ";
    for(int i=0; i<6; i++)
      cout<<marks[i]<<" ";
    cout<<"\nTotal Marks: "<<total<<endl;
  }
};
class result : public exam
{
  char grade;
  float per;
  public:
  void calculate()
  {
    per = (float)total/600*100;
    if(per>=90)
    grade='A';
    else if(per>=80)
    grade='B';
    else if(per>=70)
    grade='C';
    else if(per>=60)
    grade='D';
    else if(per>=50)
    grade='E';
    else
    grade='F';
  }
  void display()
  {
    exam::display();
    cout<<"Percentage: "<<per<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
  }
};
int main()
{
  result r;
  r.getdata();
  r.calculate();
  r.display();
  return 0;
}