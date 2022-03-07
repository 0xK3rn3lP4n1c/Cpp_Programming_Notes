#include <iostream>
using namespace std;

//A pointer is a special type of variable that contains memory address as value
int main()
{
    int var = 66;

    cout << &var << endl; //& == address operator

    int *varPointer;

    varPointer = &var; 

    cout << varPointer << endl;

    return 0; 
}