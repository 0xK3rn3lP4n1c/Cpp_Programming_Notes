#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int y = 10;
    
    x += 10; 
    cout << x++ << endl; // when you run this code you'll get 20 then 21
                        // It's because the code will first run the cout and print the number 
    cout<< x <<endl; //And then it will increment. 
    // If you want to increment first you have to write the code like this

    cout << ++y <<endl;
    cout << y <<endl;
    
    
    return 0;
}