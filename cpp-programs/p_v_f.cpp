#include<iostream>
using namespace std;
class vehicle
{
  public:
  char name[50];
  char model[50];
  vehicle()
  {
    cout<<"Enter vehicle name:";
    cin>>name;
    cout<<"Enter vehicle model:";
    cin>>model;
  }
  virtual void maxspeed()=0;
  virtual void display()=0;
};
class car:public vehicle
{
  public:
  int hp;
  car()
  {
    cout<<"Enter car horsepower:";
    cin>>hp;
  }
  void maxspeed()
  {
    cout<<"Max speed= "<<hp*2<<endl;
}
  void display()
  {
    cout<<"Car name: "<<name<<endl<<"Car model: "<<model<<endl;
  }
};
class bike:public vehicle
{
  public:
  int cc;
  bike()
  {
    cout<<"Enter bike cc:";
    cin>>cc;
  }
  void maxspeed()
  {
    cout<<"Max speed= "<<cc*2<<endl;
  }
  void display()
  {
    cout<<"Bike name: "<<name<<endl<<"Bike model: "<<model<<endl;
  }
};
int main()
{
  vehicle *v;
  car c;
  v=&c;
  v->display();
  v->maxspeed();
  bike b;
  v=&b;
  v->display();
  v->maxspeed();
  return 0;
}