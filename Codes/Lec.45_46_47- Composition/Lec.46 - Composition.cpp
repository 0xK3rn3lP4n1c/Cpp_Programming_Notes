#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


int main()
{
	Birthday birthObj(16,5,1999);
	
	People Kp("Kernel_Panic", birthObj);
	Kp.printInfo();
	
}
