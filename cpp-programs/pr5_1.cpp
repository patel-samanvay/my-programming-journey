#include<iostream>
using namespace std;
class bank
{
  int amount;
  public:
  bank()
  {
    cout<<"Enter initial amount:";
    cin>>amount;
  }
  void deposit()
  {
    int dep;
    cout<<"Enter amount to deposit:";
    cin>>dep;
    amount+=dep;
  }
  void withdraw()
  {
    int with;
    cout<<"Enter amount to withdraw:";
    cin>>with;
    if(with>amount)
    {
      cout<<"Insufficient balance"<<endl;
    }
    else
    {
      amount-=with;
    }
  }
  void display()
  {
    cout<<"Current balance:"<<amount<<endl;
  }
};
int main()
{
  bank b;
  b.withdraw();
  b.deposit();
  b.display();
  return 0;
}