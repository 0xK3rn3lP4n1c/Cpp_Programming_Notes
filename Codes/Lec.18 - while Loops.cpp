#include <iostream>
using namespace std; 


int main(){
	
	int number = 0;
	
	/*While is a useful and a simple loop type. The syntax is shown below
	as we can see until the number is less or equal to 9 the code will keep
	running and printing "nice number"*/ 
	
	while (number <= 9) {
		cout<<number<<" nice number"<<endl;
		number = number + 1; 
	}
	
	return 0;
}
