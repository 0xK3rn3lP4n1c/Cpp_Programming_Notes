#include <iostream>
#include <string>
using namespace std;
						// A constructor is a function that is called automaticly as soon as an Object is created
						// Constructors are used to get bunches variables and to set them initially afterwards
class KernelsClass{
	public: 
		KernelsClass(string z){ // Constructors never have a return type, they only have a name and their name is the same as the classes name
			setName(z);
	}
		void setName(string x){ 
			name = x; 
		} 
		string getName(){ 
			return name; 
		}
	private: 
		string name;
};


int main(){
	
	KernelsClass ko("Kernel Panic!!");
	cout<<ko.getName();
	
	KernelsClass ko2("The BSoD!!");
	cout<<"\n"<<ko2.getName();
	//As you can see even though the objects are in the same class but they don't override each other.
	return 0;
}
//!Will define more soon
