#include<iostream> 
using namespace std; 
class call 
{ 
  int a,b,c,d; 
  public: 
  void swap_val(int x, int y) 
  { 
    int temp1; 
    temp1=x; 
    x=y; 
    y=temp1; 
    cout<<"Swapped values are: "<<endl<<"a:"<<x<<endl<<"b:"<<y<<endl; 
  } 
  void swap_ref(int *m, int *n) 
  { 
    int temp2; 
    temp2=*m; 
    *m=*n; 
    *n=temp2; 
    cout<<"Swapped values are: "<<endl<<"c:"<<*m<<endl<<"d:"<<*n<<endl; 
  } 
}; 
int main() 
{ 
  call c1; 
  int a,b,c,d; 
  cout<<"Enter value of a:"; 
  cin>>a; 
  cout<<"Enter value of b:"; 
  cin>>b; 
  c1.swap_val(a,b); 
  cout<<"Enter value of c:"; 
  cin>>c; 
  cout<<"Enter value of d:"; 
  cin>>d; 
  c1.swap_ref(&c,&d); 
}