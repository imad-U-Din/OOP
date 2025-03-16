#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
    string name;
    int availablePaper;

public:
    Printer(string name, int paper)
    {
        name = name;
        availablePaper = paper;
    }

    void print(string txtDoc)
    {
        int requiredPaper = txtDoc.length() / 10;

        if (requiredPaper > availablePaper)
            // throw "No paper";
            throw 101;

        cout << "Printing..."
             << txtDoc << endl;
        availablePaper -= requiredPaper;
    }
};

int main()
{
    Printer myPrinter("HP 15s", 10);
    try
    {
        myPrinter.print("Hello my name is imad");
        myPrinter.print("Hello my name is imad");
        myPrinter.print("Hello my name is imad");
    }
    catch (const char *txtException)
    {
        cout << "Exception: " << txtException << endl;
    }
    return 0;
}