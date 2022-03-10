#include <iostream>
#include "Protected.h"
#include "Inheritee.h"
using namespace std;


void Inheritee::doSomething()
{
	publicv = 1;
	protectedv = 10;
	
	cout << "Our Public Variable is : " << publicv << " Horray we can access it!" << endl;
	cout << "Our Protected Variable is : " << protectedv << " Yeah! We can access this too..." << endl;
}
