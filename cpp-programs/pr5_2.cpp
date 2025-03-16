#include<iostream>
using namespace std;
class area
{
  public:
  void area_1(float l,float b)
  {
    if(b==0){
      cout<<"Area of square is:"<<l*l<<endl;
    }
    else{
      cout<<"Area of rectangle is:"<<l*b<<endl;
    }
  }
  void area_2(float r, float pi=3.14)
  {
    cout<<"Area of circle is:"<<pi*r*r<<endl;
  }
};
int main()
{
  area a;
  a.area_1(5,0);
  a.area_1(5,6);
  a.area_2(5);
  return 0;
}