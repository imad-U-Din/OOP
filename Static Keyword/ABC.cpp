#include <iostream>
using namespace std;

class ABC {
    public:
    ABC(){
        cout<<"constructor\n";
    }

    ~ABC(){
        cout<<"Destructor\n";
    }
};
int main()
{
  if(true){
   static ABC obj;
  }

  cout<<"End of main function\n";
    return 0;
}