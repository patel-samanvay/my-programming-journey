#include<iostream>
using namespace std;
class abc
{
  int a=10;
  protected:
  int b=20;
  public:
  int c=30;
  void show1()
  {
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
  }
};
class xyz:public abc
{
  public:
  void show2()
  { 
    cout<<"b="<<b<<endl; 
    cout<<"c="<<c<<endl; 
  }
};
int main()
{
  abc obj1;
  xyz obj2;
  obj1.show1();
  obj2.show2();
  cout<<"c="<<obj1.c;
}