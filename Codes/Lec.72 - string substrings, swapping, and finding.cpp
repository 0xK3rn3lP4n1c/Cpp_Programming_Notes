#include <iostream>
#include <string>
using namespace std;

// Substring is a function for writing smaller strings from bigger strings
// Swap function basically takes a string and swaps it with another
// Find function finds the first occurrance of the character you have given in a string
int main()
{
    string s1("I am a string");
    string s2("Avokado");
    string s3("Dragon Fruit");
    string s4("Hey bre string here");


    cout << s1.substr(7, 6) << endl; // a substring first of all takes the beginning array
                                    // and then we enter how many characters we want to go on

    cout << s2 << " " << s3 << endl;
    s2.swap(s3);    // you use swap function like this first string then the string you want to swap with
    cout << s2 << " " << s3 << endl;


    cout << s4.find("re") << endl; // with this you can only get 5 because "re" first occurs at 5th place (starting from 0) as bre
    cout << s4.rfind("re") << endl; // with rfind you do a reverse find function and this time it finds the re in here which is 17th

}