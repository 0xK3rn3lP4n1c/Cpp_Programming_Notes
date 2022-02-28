# include <iostream>

using namespace std;
/*

void somethingNotToReturn() // Whenever a function that doesn't return anything we use void 

int main () { --> This is our main function right here, we write our operations under it and it has to return something
			 	 The very first thing you write is the return type of the function --This one returns a number (integer)
 	
	 void somethingNotToReturn();
	
	return 0;
}

as an example of funtions you can see that our main funciton calls the void pbnjam funciton
!Disclaimer: You need to place the called funciton before the main function for the system to see. If you don't want to do that you can use function prototyping
to prototype a function you just basically write the called function's name before the main function

*/

void pbnjam();


int main (){
	pbnjam();
}

void pbnjam(){
	cout<<"~~~"<<endl;
	cout<<"PBandJ"<<endl;
	cout<<"___";
}

