#include <iostream>
using namespace std;

// Compile-time polymorphism using Operator Overloading
class Print {
public:
    // Overloading the '<<' operator for integers
    void operator<<(int x) {
        cout << "int : " << x << endl;
    }

    // Overloading the '<<' operator for characters
    void operator<<(char ch) {
        cout << "char : " << ch << endl;
    }
};

int main() {
    Print p1;
    p1 << 10;   // Calls the overloaded operator<< for int
    p1 << '&';  // Calls the overloaded operator<< for char

    return 0;
}
