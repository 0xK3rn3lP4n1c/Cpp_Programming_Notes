#include <iostream>
using namespace std;
/*Make a program that allows to user to enter 5 different numbers and gives 
back the total of those numbers......But with while loop*/

int main()
{
	int x = 1;
	int number;
	int total = 0;
	
	while (x <=5) {
		cin>>number;
		total = number + total;
		x++;// This is the same as x = x + 1 || cool trivia: thats where c++ came from
	}	
	
	cout<<"Your total is: "<<total<<endl;
	return 0;
}
