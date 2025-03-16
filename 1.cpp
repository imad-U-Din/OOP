#include <iostream>

using namespace std;

int main() {
    // 1. Dynamic allocation of a single variable
    int* singleVarPtr = new int;
    *singleVarPtr = 10;
    cout << "Single variable value: " << *singleVarPtr << endl;
    delete singleVarPtr;

    // 2. Dynamic allocation of an array
    int size = 5;
    int* arrayPtr = new int[size];
    for (int i = 0; i < size; ++i) {
        arrayPtr[i] = i * 2;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arrayPtr[i] << " ";
    }
    cout << endl;
    delete[] arrayPtr;

    return 0;
}