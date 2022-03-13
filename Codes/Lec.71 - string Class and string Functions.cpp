#include <iostream>
#include <string>
using namespace std;


int main()
{
	//cin command reads only one string until it gets to a \n or a whitespace
	string kernel;
	string s1("BSoD");
	string s2;
	string s3;
	
	cout << "enter a string" << endl;
	getline(cin, kernel); // with getline we can get the whole sentence
	cout << "the sting you entered is: " << kernel << endl;
	
	s2 = s1; // this function and assign functions are the same
	s3.assign(s1);
	cout << s1 << " " << s2 << " " << s3 << endl;
	
	cout << "the third character of the string is " << s1.at(3) << endl; // To find a character of a string you use the at() method
	
	for(int x = 0; x<s1.length(); x++){
		cout << s1.at(x);
	}
}
