#include <iostream>
#include "bsodClass.h"
using namespace std;

int main ()
{
	
	BsodClass bsodClassObject;
	BsodClass *bsodClassPointer = &bsodClassObject;
	
	bsodClassObject.printSomething();
	bsodClassPointer->printSomething();
	
	return 0;
}
