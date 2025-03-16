#include <iostream>
using namespace std;
//compile time polymorphism
//FUNCTION OVERLOADING
class Print{
    public:
    void show(int x){
        cout<<"int : "<<x<<endl;
    }

    void show(char ch){
        cout<<"char : "<<ch<<endl;
    }
};

int main()
{
 Print p1;
 p1.show(10);
 p1.show('&');
    return 0;
}