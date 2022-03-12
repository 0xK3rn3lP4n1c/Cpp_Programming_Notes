#include <iostream>
using namespace std;


template <class T> // You can build templates for classes as well
class Kernel{
    T first, second;
    public:
        Kernel(T a, T b){
            first = a;
            second = b;
        }
    T bigger();
};

template <class T> // Here because we are going to build bigger() function here we are going to need to build template here as well
T Kernel<T>::bigger()// We need to build this template before every single funciton that uses the Kernel class and add the template generic in <>
{  return (first > second ? first : second); // to build a function that has a template first we write the return type which is T, the class we are working with which is Kernel
                                            // and lastly the function we are going to work on which in this case is bigger()



} 
int main()
{
    Kernel <int> ko(53, 33); // Here between our class name and our object we need to specify the return data type in <>
                            // What this template does is it basically takes the return type which we entered between our class and object
                            // And it puts that data type wherever it sees our template which is T
    cout << ko.bigger() << endl;


    return 0;
}