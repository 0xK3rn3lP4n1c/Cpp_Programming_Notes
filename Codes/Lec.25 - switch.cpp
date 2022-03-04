#include <iostream>
using namespace std;


int main()
{
    int age;
    cout <<"Enter Your Age: "<<endl;
    cin>>age;

    switch (age)
    {
    case 16:
        cout << "Hey you can drive now!!" << endl;
        break;
    case 18:
        cout << "go buy some lotto ticko!" << endl;
        break;
    case 21:
        cout << "You can drink and derive now!" << endl;
        break;
    default:
        cout <<"Sorry bro you didn't get nothing";
    }

    return 0;
}