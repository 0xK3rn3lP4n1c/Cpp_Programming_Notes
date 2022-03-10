#include <iostream>
#include "Atlana.h"
using namespace std;


int main()
{
	Atlana a(34);
	Atlana b(21);
	Atlana c;
	
	c=a+b;
	
	cout << c.num << endl;
	
	return 0;
}
