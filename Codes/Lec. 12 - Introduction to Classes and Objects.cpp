#include <iostream>
using namespace std;

//Classes are excellent things for grouping related functions
//You desfine a class by simply typing class and adding your class name
class KernelsClass{
	public: //with this specifier main and other functions that are outside of this class can use these parameters this is called an access specifier.
		void Thevoidintheclass(){
			cout<<"Hello I'm a void in a class, K3rn3l's Class!!";
	}
	};


int main() { 

//To acces a class you need an Object, an object tells you what class you're working with
KernelsClass kernelsObject; // First of all we need to define an object like this
kernelsObject.Thevoidintheclass();//after that we can use the object. to access the functions in the object we use "."

return 0;
}
