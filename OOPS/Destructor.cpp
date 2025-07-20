#include<iostream>
using namespace std;

class A
{
public:
    string name;
    string dept;
    string subject;
    string salary;

    // Constructor
    A(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = to_string(salary); 
    }

    // Destructor
    ~A()
    {
        cout << "Destructor called for: " << name << endl;
    }

    // Member function
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
        cout << "Subject : " << subject << endl;
    }
};

int main()
{
    A obj1("rahul", "cse", "cyber", 50000);
    obj1.getInfo();

    A obj2(obj1); 
    obj2.getInfo();

    return 0;
}
