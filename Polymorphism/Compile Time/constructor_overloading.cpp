#include <iostream>
using namespace std;
//compile time polymorphism
//CONSTRUTOR OVERLOADING
class Student{
    public:
    string name;

    Student(){
        cout<<"Non Parameterized\n";
    }

    Student(string name){
        this->name=name;
        cout<<"Parameterized";
    }
};

int main()
{
Student s1("Imad u din");
    return 0;
}