#include <iostream>
using namespace std;

// An exeption is a way of handling errors. Lets say a user wants to divide 0/0 we want to catch that and give error for this we use Exeption handlers
int main()
{
    // To write an exeption handler (EH) we first have to write a try function
    try{
        int momsAge = 50;
        int sonsAge = 34;

        if(sonsAge > momsAge)  // In this try function we want to test if our exeption rules are met. In this particular one we if son is older than mother which should never happen 
        {
            throw 99; // Here if our eception rule is met so there is an error we define a parameter or an error number per se with the throw func. 
        }
    }catch(int x){ // A catch block can take parameters and these parameters are just like error numbers. 
        cout << "son can not be older than mom; ERROR NUMBER: " << x << endl;
    }// And after our try function we use catch block to tell to the code what to do if indeed there is an error.  

    return 0;
}