#include <iostream>
#include <string.h>
using namespace std;
class MyString 
{
  char* str;
  public:
  MyString() 
  {
    str = new char[1];
    str[0] = '\0';
  }
  MyString(const char* s) 
  {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
  }
  MyString(const MyString& other) 
  {
    str = new char[strlen(other.str) + 1];
    strcpy(str, other.str);
  }
  MyString& operator=(const MyString& other) 
  {
    if (this == &other) 
    {
      return *this;
    }
    delete[] str;
    str = new char[strlen(other.str) + 1];
    strcpy(str, other.str);
    return *this;
  }
  void display() const 
  {
    cout<<str<<endl;
  }
};
int main() 
{
  MyString s1("Hello");
  MyString s2;
  cout<<"Before assignment:"<<endl;
  cout<<"s1: ";
  s1.display();
  cout<<"s2: ";
  s2.display();
  s2 = s1;
  cout<<"\nAfter assignment:"<<endl;
  cout<<"s1: ";
  s1.display();
  cout<<"s2: ";
  s2.display();
  return 0;
}
