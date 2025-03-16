#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private: // DATA AND METHODS ACCESSIBLE INSIDE CLASS
    double salary;

public: // DATA AND METHODS ACCESSIBLE TO EVERYONE
    // PARAMETERIZED CONSTRUCTOR (ONLY USED IN PUBLIC)
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    // PROPERTIES
    string name;
    string dept;
    string subject;

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

    t1.getinfo();

    return 0; 
}