#include <iostream>
using namespace std;

template <class T> // here we want to build a template that handles all types of data types except char. To do that first we build a generic template
class Kernel
{
    public:
        Kernel(T x){
            cout << x << " is not a char!" << endl;
        }
};

template<> // After we have built a generic template and the class we want to work with, we build the template for char's To do that first we build a template with empty <>
class Kernel<char> // Then after defining the class -We can define the same class because we are working on the same class- in <> we define the data type we want this template to handle
{
    public:
        Kernel(char x){
            cout << x << " is a char!" << endl;
        }
};



int main()
{

    Kernel<int> kobj1(7);
    Kernel<double> kobj2(7.456);
    Kernel<char> kobj3('K');

    return 0;
}