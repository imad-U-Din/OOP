#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private: // DATA AND METHODS ACCESSIBLE INSIDE CLASS
    double salary;

public: // DATA AND METHODS ACCESSIBLE TO EVERYONE
    // PARAMETERIZED CONSTRUCTOR (ONLY USED IN PUBLIC)

    string name;
    string dept;
    string subject;
    Teacher(string n, string d, string s, double sal)
    {
        this->name = n;
        this->dept = d;
        this->subject = s;
        this->salary = sal;
    }

    // COPY CONSTRUCTOR
    Teacher(Teacher &originalObject){
        cout<<"I am custom copy constructor..\n";
        this->name=originalObject.name;
        this->dept=originalObject.dept;
        this->subject=originalObject.subject;
        this->salary=originalObject.salary;
    }

        void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "department: " << dept << endl;
        cout << "subject: " << subject << endl;
    }
};
int main()
{
    Teacher t1("imad", "CSE", "c++", 10000);

    // t1.getinfo();

    Teacher t2(t1); // DEFAULT COPY CONSTRUCTOR CALL
    t2.getinfo();
    return 0;
}