#include <iostream>
using namespace std;



int main()
{
    try{

        int num1;
        int num2;
        
        cout << "Enter First Number: " << endl;
        cin >> num1;
        cout << "Enter Second Number: " << endl;
        cin >> num2;

        if(num2 == 0){
            throw 0;
        }

        cout << num1 / num2 << endl;
    }catch(...){ // Whenever you want any type of error messages to be cought you put '...'
        cout << "You cant divide by 0" << endl;
    }


    return 0;
}