#include <iostream>
using namespace std;

void printNumber(int x)
{
    cout << "I'm an integer and mein value ist: " << x << endl;
}

void printNumber(float x)
{
    cout << "Ich bin ein float und meine value ist: " << x << endl;
}


int main()
{
    int a = 33;
    float b = 62.8756;

    printNumber(a);
    printNumber(b);
    


    return 0;
}