#include <iostream>
#include <string>
using namespace std;
class Teacher
{
    public: 
    string name;
    string dept;
    string subject;
    double salary;
    //methods
    void changedept(string newdept)
    {
        dept=newdept;
    }
};
int main()
{
    Teacher t1;
    t1.name="Rahul";
    t1.dept="Cyber";
    t1.salary=50000;
    cout<<t1.name;
    return 0;
}