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
  int operator==(const MyString& other) const 
  {
    if (strcmp(this->str, other.str) == 0)
      return 1; 
    else
      return 0;
    }
    void display() const 
    {
        cout << str << endl;
    }
};

int main() 
{
    MyString s1("You");
    MyString s2("You");
    MyString s3("Me");
    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    cout << "s3: "; s3.display();
    cout << "\nComparison Results:\n";
    cout << "s1 == s2: " << (s1 == s2) << endl; 
    cout << "s1 == s3: " << (s1 == s3) << endl; 
    return 0;
}
