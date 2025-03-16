#include <iostream>
using namespace std;

//MULTI LEVEL INHERITANCE
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

class GradStudent :public Student
{
    public:
    string researchArea;
};

int main()
{
   GradStudent s1;
   s1.name="Imad u din";
   s1.researchArea="Quantum physics";
   cout<<s1.name<<endl;
   cout<<s1.researchArea<<endl;
    return 0;
}