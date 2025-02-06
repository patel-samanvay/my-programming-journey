#include<iostream>
using namespace std;
class truck;
class car
{
  int speed;
  public:
  void get(){
    cout<<"Enter speed of car:";
    cin>>speed;
  }
  friend void speed(car c1, truck t1);
};
class truck
{
  int speed;
  public:
  void get(){
    cout<<"Enter speed of truck:";
    cin>>speed;
  }
  friend void speed(car c1, truck t1);
};
void speed(car c1, truck t1){
  if(c1.speed>t1.speed){
    cout<<"Car is faster than truck";
  }
  else{
    cout<<"Truck is faster than car";
  }
}
int main(){
  car c1;
  truck t1;
  c1.get();
  t1.get();
  speed(c1,t1);
}
