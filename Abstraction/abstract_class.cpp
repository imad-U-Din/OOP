#include <iostream>
using namespace std;

class Shape // ABSTRACT CLASS
{
    virtual void draw() = 0; // BLUE PRINT ( PURE VIRTUAL FUNCTION->ABSTARCT CLASS)
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}