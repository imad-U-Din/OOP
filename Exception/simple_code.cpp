#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cout << "Enter n and d: " << endl;
    cin >> n >> d;

    try
    {
        if (d == 0)
        {
            throw d;
        }
    }
    catch (int ex)
    {
        cout << "Divide by zero not allowed";
    }
    int result = n / d; // IF I DIVIDE BY ZERO (ERROR)
    cout << "Division is: " << result;
}