#include <iostream>
#include "Prometheus.h"
using namespace std;

Prometheus::Prometheus(int val)
:h(val)
{
}

void Prometheus::printSomething()
{
	cout << "h = " << h << endl;
	cout << "this -> " << this->h << endl; // This is a special kind of pointer and in  our code it points to h inpo
	cout << "(*this).h = " << (*this).h << endl; //Derefferencing a pointer
}
