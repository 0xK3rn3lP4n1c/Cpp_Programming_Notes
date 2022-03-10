#include <iostream>
#include "Kclass.h"
#include "Bclass.h"
using namespace std;


int main()
{
	Bclass bo;

}

/*Whenever you inherit a class first of all the constructor of the class on top gets executed 
And it's Deconstructor gets last executed and the execution importance goes like this in our
example first Kclass constructor gets executed then Bclass Constr. then Bclass deConst. then
Kclass deConstr. gets executed. */ 
