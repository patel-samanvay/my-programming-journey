#include<iostream>
using namespace std;
class employee
{
  int emp_id;
  char name[50];
  public:
  int salary;
  void get()
  {
    cout<<"Enter employee id:";
    cin>>emp_id;
    cout<<"Enter employee name:";
    cin>>name;
    cout<<"Enter employee salary:";
    cin>>salary;
  }
  void display()
  {
    cout<<"Employee id:"<<emp_id<<endl;
    cout<<"Employee name:"<<name<<endl;
    cout<<"Employee salary:"<<salary<<endl;
  }
};
int main()
{
  employee* e=new employee[5];
  for(int i=0;i<5;i++)
  {
    cout<<"Enter details of employee "<<i+1<<":"<<endl;
    e[i].get();
  }
  for (int i = 0; i < 4; ++i) 
  {
    for (int j = i + 1; j < 5; ++j) 
    {
        if (e[i].salary < e[j].salary) 
        {
            employee temp = e[i];
            e[i] = e[j];
            e[j] = temp;
        }   
    }   
  }
  cout<<"Details of employees in descending order of salary:"<<endl;
  for (int i=0;i<5;i++)
  {
    cout<<"Details of employee "<<i+1<<":"<<endl;
    e[i].display();
  }
  return 0;
}