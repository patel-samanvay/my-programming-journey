#include<iostream>
using namespace std;
class abc
{
  int id;
  public:
  abc()
  {
    id=20;
  }
  abc(abc &a)
  {
    id=a.id;
  }
  void display()
  {
    cout<<"ID:"<<id<<endl;
  }
};
int main()
{
  abc a1;
  abc a2=a1;
  a1.display();
  a2.display();
  return 0;
}