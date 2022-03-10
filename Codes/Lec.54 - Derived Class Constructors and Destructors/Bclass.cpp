#include <iostream>
#include "Kclass.h"
#include "Bclass.h"
using namespace std;

Bclass::Bclass()
{
	cout << "Yo soy Derived Constructor" << endl;
}

Bclass::~Bclass()
{
	cout << "Me llamo Derived deConstructor" << endl;
}
