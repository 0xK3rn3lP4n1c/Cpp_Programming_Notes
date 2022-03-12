#include <iostream>
using namespace std;


template <class kernel> //Template Definition: Generic type of data 
kernel addSomethings(kernel a, kernel b){ // here we can use kernel instead of int or long etc.


    return a + b;
}


int main()

{
    int x = 7, y = 43, z;
    double a = 12, s = 53, d;

    z = addSomethings(x, y); //Here because we have a generic type of data we can use it with int
    d = addSomethings(a, s); // And we can use it with doubles as well 
    cout << z << endl;
    cout << d << endl;


    return 0;
}