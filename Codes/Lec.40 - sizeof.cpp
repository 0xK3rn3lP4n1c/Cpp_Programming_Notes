#include <iostream>
using namespace std; 


int main ()
{
    char c;
    int a;
    double x;
    double arr[10];
    
    cout << "a Char is " << sizeof(c) << " bytes" << endl;
    cout << "an int is " << sizeof(a) << " bytes" << endl;
    cout << "a double is " << sizeof(x) << " bytes" << endl;
    cout << "This array is " << sizeof(arr) << " bytes" << endl;
    cout << "This array has " << sizeof(arr) / sizeof(arr[0]) << " elements" << endl;


    return 0;
}