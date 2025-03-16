#include <iostream>
using namespace std;

//VIRTUAL FUNCTIONS
class Parent
{
    public:
    void getInfo()
    {
        cout << "Parent class\n";
    }

   virtual void hello(){
        cout<<"hello from parent\n";
    }
};

class Child : public Parent
{
    public:
    void getInfo(){
        cout<<"child class\n";
    }

    void hello(){
        cout<<"hello from child\n";
    }
};

int main()
{
 Child c1;
 c1.hello();
    return 0;
}