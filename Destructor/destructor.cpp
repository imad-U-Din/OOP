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

    // DESTRUCTOR
    ~Student()
    {
        cout << "I am Destructor...\n";
        delete cgpaptr; //Memory leak (if not used)
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

    s1.getInfo();

    return 0;
}