#include "Crash.h"
#include <iostream>
using namespace std;

Crash::Crash()
{
	cout <<"this is a crash code" << endl;
}

Crash::~Crash()
{
	cout << "I'm the deconstructor" << endl; // Deconstructors can't have return value.
}
