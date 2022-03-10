#include <iostream>
#include "Atlana.h"
using namespace std;

Atlana::Atlana()
{
}

Atlana::Atlana(int a)
{
	num = a;
}

Atlana Atlana::operator+(Atlana aao)
{
	Atlana brandNew;
	brandNew.num = num + aao.num;
	return(brandNew);
}
