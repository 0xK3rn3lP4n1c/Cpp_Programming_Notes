#include <iostream>
using namespace std;


int main ()
{
    int arr[5];
    int *bp0 = &arr[0];
    int *bp1 = &arr[1];
    int *bp2 = &arr[2];
    int *bp3 = &arr[3];


    cout << "bp0 is at: " << bp0 << endl;
    cout << "bp1 is at: " << bp1 << endl;
    cout << "bp2 is at: " << bp2 << endl;
    cout << "bp3 is at: " << bp3 << endl;

    bp0 += 2;

    cout << "bp0 is now at: " << bp0 << endl;

    return 0;
}