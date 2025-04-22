#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class abc
{
  char* string = new char[50];
  public:
  void get()
  {
    cout<<"Enter string 1:";
    cin>>string;
  }
  void display()
  {
    cout<<string;
  }
  friend abc operator+(abc &s1, abc &s2);
};
abc operator+(abc &s1, abc &s2)
{
  abc t;
  t.string=strcat(s1.string,s2.string);
  return t;
}
int main()
{
  abc s1,s2,s3;
  s1.get();
  s2.get();
  s3=operator+(s1,s2);
  s3.display();
  return 0;
}