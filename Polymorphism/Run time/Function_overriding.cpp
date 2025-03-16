#include <iostream>
using namespace std;

//FUNCTION OVERRIDING
class Parent
{
    public:
    void getInfo()
    {
        cout << "Parent class\n";
    }
};

class Child : public Parent
{
    public:
    void getInfo(){
        cout<<"child class\n";
    }
};

int main()
{
    Parent p1;
    p1.getInfo();
    
    Child c1;
    c1.getInfo();
    return 0;
}