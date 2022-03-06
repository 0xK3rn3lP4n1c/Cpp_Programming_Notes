#include <iostream>
using namespace std;


int main() 
{
    int kernel [9];

    cout << "Element - Value" << endl;

    for (int i = 0; i < 9; i++)
    {
        kernel[i] = 99;
        cout << "  " << i << "        " << kernel[i] << endl;
    } 

    return 0;
}