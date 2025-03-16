#include <iostream>
using namespace std;

// HIERARCHIAL INHERITANCE
class Person
{
public:
    string name;
    int age;
};

class Student : public Person // INHERITANCE
{
public:
    int rollno;
};

class Teacher : public Person
{
public:
    string subject;
};

int main()
{

    return 0;
}