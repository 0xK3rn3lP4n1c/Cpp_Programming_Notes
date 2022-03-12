#include <iostream>
using namespace std;


template <class Firstd, class Secondd> // Since we have more than one data type we are setting 2 template classes
Firstd comparisonMaker(Firstd a, Secondd b)
{
    return (a < b ? a : b); // syntax is if a is lesser than b print a else print b
}

int main()
{

    int x = 99; // This is the 'Firstd' data type here the 'Firstd' data type gets set to int
    double y = 22.56; // Here because our return type is 'Firstd' which is an int this value will be converted to an int

    cout << comparisonMaker(x,y) << endl; 

    return 0;
}