#include<iostream>
#include<conio.h>
using namespace std;

class employee
{
  char name[20];
  float age;
  public:
  void getdata()
  {
    cout<<"Enter the name of the employee:";
    cin>>name;
    cout<<"Enter the age of the employee:";
    cin>>age;
  }
  void putdata()
  {
    cout<<"Name of the employee:"<<name<<endl;
    cout<<"Age of the employee:"<<age<<endl;
  }
};

int main(){
  employee e[5];
  int i;
  for(i=0;i<5;i++){
    e[i].getdata();
  }
  for(i=0;i<5;i++){
    e[i].putdata();
  }
  return 0;
}