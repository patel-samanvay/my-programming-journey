#include<iostream>
using namespace std;
class demo
{
  public:
  demo()
  {
    cout<<"Constructor is called"<<endl;
  }
  ~demo()
  {
    cout<<"Destructor is called"<<endl;
  }
};
int main()
{
  demo d1;
  cout<<"Above one is for first object"<<endl;
  demo d2;
  cout<<"Above one is for second object"<<endl;
  demo d3;
  cout<<"Above one is for third object"<<endl;
  return 0;
}