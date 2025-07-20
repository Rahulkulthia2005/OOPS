#include<iostream>
using namespace std;
class A
{
    public:
    string name;
    string dept;
    string subject;
    string salary;
    A(string name,string dept , string subject,double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    //Copy constructor
    A(A &obj )
    {
        cout<<"i am copy constructor";
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
    
    void getInfo()
    {
        cout<<"Name : "<< name <<endl;
        cout<<"Department : "<< dept <<endl;
        cout<<"Subject : "<< subject <<endl;
    }
};
int main()
{   
    A obj1("rahul","cse","cyber",50000);
    obj1.getInfo();
    A obj2(obj1);
    obj2.getInfo();
    return 0;
}