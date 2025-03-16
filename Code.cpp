#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    // Dynamic memory allocation
    double *cgpaptr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaptr = new double; // HEAP
        *cgpaptr = cgpa;
    }
    //COPY CONSTRUCTOR(SHALLOW COPY)
    // Student(Student &obj)
    // {
    //     this->name = obj.name;
    //     this->cgpaptr = obj.cgpaptr;
    // }
    //DEEP COPY
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaptr=new double;
        *cgpaptr = *obj.cgpaptr;
    }
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};

int main()
{
    Student s1("Imad U din", 9.9);
    
    Student s2(s1); 

    s1.getInfo();
    *(s2.cgpaptr) = 10.0;
    cout<<endl;

    s1.getInfo();
    cout<<endl;
    
    s2.name="muneeb";
    s2.getInfo();

    return 0;
}