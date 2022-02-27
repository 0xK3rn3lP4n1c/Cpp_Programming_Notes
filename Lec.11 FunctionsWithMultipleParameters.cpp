#include <iostream>
using namespace std;


int addnumber (int x, int y) { // First of all since we want the function to return us an answer we can't use Void. Instead we use the type of answer we want
	int answer = x + y;	 //and that is an integer. After that when defining the parameters since we have more than on parameter we seperate the parameters with a comma.  
	return answer; //after we have finished the operation we have to return something and as you can see we return the answer of the addition
}
int main () {
	cout<<addnumber(22,32); //And just like before you can give the parameters by dividing them with a comma and entering them in the same order as above
	//Ps. We needed a cout function beause at the end of the operation above we will have the answer value in the memory but it wont write on the screen till we say so ;)
	return 0;
}
