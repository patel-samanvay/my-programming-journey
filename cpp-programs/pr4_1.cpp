#include<iostream>
using namespace std;
class abc
{
  static float a,b;
  public:
  static void getdata(){
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
  }
  static void sum(){
    cout<<"Sum is:"<<a+b<<endl;
  }
  static void avg(){
    cout<<"Average is:"<<(a+b)/2;
  }
};
float abc::a;
float abc::b;
int main(){
  abc::getdata();
  abc::sum();
  abc::avg();
}
