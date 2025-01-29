#include<iostream>
#include<cmath>
using namespace std;

class root
{
  public:
  void calc(int a, int c, int b=1)//default argument for b
  {
    float d;
    d=b*b-4*a*c;
    if(d>0)
    {
      cout<<"Roots are real and different"<<endl;
      cout<<"Root 1 is:"<<(-b+sqrt(d))/(2*a)<<endl;
      cout<<"Root 2 is:"<<(-b-sqrt(d))/(2*a)<<endl;
    }
    else if(d==0)
    {
      cout<<"Roots are real and same"<<endl;
      cout<<"Root 1 is:"<<(-b)/(2*a)<<endl;
      cout<<"Root 2 is:"<<(-b)/(2*a)<<endl;
    }
    else
    {
      cout<<"Roots are imaginary"<<endl;
      cout<<"Root 1 is:"<<(-b)/(2*a)<<"+"<<sqrt(-d)/(2*a)<<"i"<<endl;
      cout<<"Root 2 is:"<<(-b)/(2*a)<<"-"<<sqrt(-d)/(2*a)<<"i"<<endl;
    }
  }
};

int main(){
  root r;
  int a,b,c;
  cout<<"Enter the value of a:";
  cin>>a;
  cout<<"Enter the value of c:";
  cin>>c;
  r.calc(a,c);
  return 0;
}