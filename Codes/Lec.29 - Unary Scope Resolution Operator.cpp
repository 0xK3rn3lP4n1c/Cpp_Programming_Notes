#include <iostream>
using namespace std;

int Test = 21; //GLobal Variable

int main()
{
    double Test = 30; // Local Variable
    cout << Test << endl;
    cout << ::Test << endl;

    return 0;
}

// Functions will always prefer Local Variables, to make it use the global one you use the Unary Scope Resolution Operator or "::"