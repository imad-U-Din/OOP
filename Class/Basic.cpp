#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:// DATA AND METHODS ACCESSIBLE INSIDE CLASS
    double salary;
    public: // DATA AND METHODS ACCESSIBLE TO EVERYONE
    //PROPERTIES
    string name;
    string dept;
    string subject;

    //METHODS (MEMBER FUNCTIONS)
    void changeDept(string newDept){
        dept= newDept;
    }

    // SETTER(TO SET PRIVATE VALUES)
    void setSalary(double s){
        salary = s;
    }
    //GETTER 
    double getSalary(){
        return salary;
    }
};


int main (){
    Teacher t1;
    t1.name= "imad";
    t1.dept= "CSE";
    t1.subject= "c++";
    // t1.salary=10000; // THIS WILL NOT WORK BECAUSE IT IS PRIVATE
    t1.setSalary(10000);
    
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}