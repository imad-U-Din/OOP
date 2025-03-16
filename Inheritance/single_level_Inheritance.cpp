#include <iostream>
using namespace std;

class Person
{

//SINGLE LEVEL INHERITANCE
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // Person(){
    //     cout<<"Parent constructor..\n";
    // }
    // //DESTRUCTOR
    // ~Person(){
    //     cout<<"parent..\n";
    // }

};

class Student : public Person  // INHERITANCE
{
    public:
    int rollno;

    Student(string name,int age,int rollno): Person( name, age){
        this->rollno=rollno;
    }
    // //DESTRUCTOR
    // ~Student(){
    //     cout<<"Child..\n";
    // }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};

int main()
{
    Student s1("Imad U din",20,69);
    

    s1.getInfo();
    return 0;
}