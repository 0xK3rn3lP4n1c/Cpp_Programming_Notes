#include <iostream>
using namespace std; 


int Volume(int l = 1, int w = 1, int h = 1);

int main()

{
    cout << Volume(5,4,5);

    return 0;
}

int Volume(int l, int w, int h)
{

    return l * w * h;

}