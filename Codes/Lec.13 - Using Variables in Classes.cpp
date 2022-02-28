#include <iostream>
#include <string>
using namespace std;

class KernelsClass{
	public: // So we make a public funciton to acces that private variable
		void setName(string x){ // We put string x in the paranthesis because like in the previous lectures we want the function to return a string.
			name = x; // This funciton is called a setter. 
		} // Thus we have two funcitons one of them sets the variable, the other one gets the variable.
		string getName(){ // After we that we make a function to return the value publicly. 
			return name; // This is called a getter
		}
	private: // Making your variables Public could mess up your code somtimes and it is a bad practice
		string name;
};


int main(){
	KernelsClass ko;
	ko.setName("Sir K3rn3l_P4n1c the 2nd"); // So now we can acces out private class. Firs of all we need to set a name 
	cout<<ko.getName(); // After that whilst setting the function we cant acces is directly so we need to address the getName funciton in order to print it. 
	
	return 0;
}

