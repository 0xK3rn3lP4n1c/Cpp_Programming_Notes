#include <iostream>
#include <cmath>
using namespace std;

// How to make a stock market sim. with for loop !!

int main() 
{
    int day = 1;
    float d;
    float a;
    float p = 10000; //our starting money
    float r = .03; //interest rate


    for(day; day<=20; day++)
    {
        a = p * pow(1+r, day);
        d = a - p;

        cout <<"day----totalMoney----DailyEarn"<< endl;
        cout << day << "----" << a << "----" << d << endl;
        cout <<" " <<endl;
    }


    return 0;
}