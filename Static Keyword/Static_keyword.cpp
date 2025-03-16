#include <iostream>
using namespace std;

void function()
{
    static int x = 0; // INITIALIZATION STATEMENT RUNS ONLY 1 TIME
    cout << "x : " << x << endl;
    x++;
}

int main()
{
    function();
    function();
    function();
    function();
    return 0;
}