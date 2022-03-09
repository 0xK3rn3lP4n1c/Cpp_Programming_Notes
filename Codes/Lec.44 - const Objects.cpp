#include <iostream>
using namespace std;

void Bsod();
void Kernel() const;

int main()
{
    const int x = 3; //constant objects can't be changed and 
                    //they can be called form functions that are constant
    
    cout << x << endl;
    Bsod();
    Kernel();


    return 0;
}

void Bsod()
{
    cout << "I'm a regular function" << endl;
}

void Kernel() 
const {
    cout << "I'm a constant function" << endl;
}