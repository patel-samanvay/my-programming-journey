#include<iostream>
using namespace std;
class sample
{
  int a,b;
  public:
  void set_val(){
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
  }
  friend void sum(sample s1);
};
void sum(sample s1){
  cout<<"Sum is:"<<s1.a+s1.b<<endl;
}
int main(){
  sample s1;
  s1.set_val();
  sum(s1);
}