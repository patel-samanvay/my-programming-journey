#include <iostream>
using namespace std;
class Employee 
{
    protected:
    string name;
    int empID;
    double salary;
    public:
    void getEmployeeInfo() 
    {
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Employee ID: ";
        cin>>empID;
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void displayEmployeeInfo() 
    {
        cout<<"\nEmployee Information:\n";
        cout<<"Name: "<<name<<"\nID: "<<empID<<"\nSalary: "<<salary<<endl;
    }
};
class Department:public Employee 
{
    protected:
    string departmentName;
    public:
    void getDepartmentInfo() 
    {
        cout<<"Enter Department Name: ";
        cin>>departmentName;
    }
    void displayDepartmentInfo() 
    {
        displayEmployeeInfo();
        cout<<"Department: "<<departmentName<<endl;
    }
};
class Experience:public Department 
{
    int yearsOfExperience;
    public:
    void getExperienceInfo() 
    {
        cout<<"Enter Years of Experience: ";
        cin>>yearsOfExperience;
    }
    void displayExperienceInfo() 
    {
        displayDepartmentInfo();
        cout<<"Years of Experience: "<<yearsOfExperience<<endl;
    }
};
int main()
{
    Experience emp;
    cout << "Enter Employee Details:\n";
    emp.getEmployeeInfo();
    emp.getDepartmentInfo();
    emp.getExperienceInfo();
    cout <<"\nEmployee Details:\n";
    emp.displayExperienceInfo();
}

