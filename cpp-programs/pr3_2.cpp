#include<iostream>
using namespace std;

class Time
{
  int hour,minutes;
  public:
  void gettime()
  {
    cout<<"Enter the hour:";
    cin>>hour;
    cout<<"Enter the minutes:";
    cin>>minutes;
  }

  void puttime(){
    cout<<"Time is:"<<hour<<":"<<minutes<<endl;
  }

  void sum(Time t1,Time t2)
  {
    minutes=t1.minutes+t2.minutes;
    hour=minutes/60;
    minutes=minutes%60;
    hour=hour+t1.hour+t2.hour;
  }

};

int main()
{
  Time t1,t2,t3;
  t1.gettime();
  t2.gettime();
  t3.sum(t1,t2);
  t1.puttime();
  t2.puttime();
  t3.puttime();
  return 0;
}

 
