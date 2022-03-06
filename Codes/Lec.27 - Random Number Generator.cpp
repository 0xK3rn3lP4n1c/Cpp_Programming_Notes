#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//We're making a random number generator

int main()
{

    srand(time(0)); // notice that even if we give rand() func. the numbers aren't totally random. To make them seem random everytime we need to write a seed func.
    //But even if we plant a seed func. we can't have random numbers every time. To get random numbers every time we need to include ctime lib. 
    //What this time() func. does is that it has been counting seconds since 1970 or something. So the value changes every second and you can get random numbers every time

    for(int i=0; i<6; i++)
    {
        cout << (rand() % 6) + 1<< endl; // you put % modulus if you don't want bigger numbers 
    } // This operation basically takes the number divides it by 6 and gives you the remainder. 
    // if you were to add one to the random numbers you would get a dice roll sim. 

    return 0;
}