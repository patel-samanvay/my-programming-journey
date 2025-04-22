#include<iostream>
using namespace std;
class shape
{
  public:
  double length, breadth;
  void getdata()
  {
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
  }
  virtual void display()=0;
};
class triangle : public shape
{
  public:
  void display()
  {
    cout<<"Area of triangle: "<<0.5*length*breadth<<endl;
  }
};
class rectangle : public shape
{
  public:
  void display()
  {
    cout<<"Area of rectangle: "<<length*breadth<<endl;
  }
};
int main()
{
  shape *s;
  triangle t;
  s=&t;
  s->getdata();
  s->display();
  rectangle r;
  s=&r;
  s->getdata();
  s->display();
  return 0;
}