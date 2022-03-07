#include <iostream>
using namespace std;


void passByValue(int x);
void passByReference(int *x);

int main()
{
    int var1 = 19;
    int var2 = 19;


    passByValue(var1);
    passByReference(&var2);

    cout << var1 << endl; 
    cout << var2 << endl;


    return 0;
}

void passByValue(int x)
{
    x = 99;
}

void passByReference(int *x)
{   
    *x = 66;
}