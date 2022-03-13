#include <iostream>
#include <string>
using namespace std;

//Replace function takes a character of a sequence out of a string and replaces it
//String errase is a function that erases everything from the point given in a string 
//Insert function inserts a substring into the string but it doesn't take anything out
int main()
{
    string s1("Hello I'm Kernel and I do enjoy C++");

    cout << s1 << endl;

    s1.replace(26, 5, "Hate"); // Replace function takes 3 parameters 1. the when does the string start 2. how long is it? 3. what to write instead
    cout << s1 << endl;

    cout << s1.find("and") << endl;
    s1.erase(16); // here it starts erasing from the 16th charachter which is the blank space in front of the "and"
    cout << s1 << endl;

    s1.insert(16, " and I loove C++"); // insert function takes 2 parameters 1. where to insert 2. what to insert
    cout << s1 << endl;

}