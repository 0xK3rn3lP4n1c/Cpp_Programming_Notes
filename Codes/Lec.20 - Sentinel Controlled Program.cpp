#include <iostream>
using namespace std;

/*What if were to use the while loop but we didn't know how many entries 
should be entered. Thats where the sentinel programs kick in !*/

int main()
{
	int age;
	int ageTotal = 0;
	int numberOfPeople = 0;

	
	cout<<"Enter first persons age or -1 to quit"<<endl;
	cin>>age;
	
	while(age!=-1){
		ageTotal = ageTotal + age;
		numberOfPeople++;
		
		cout<<"Enter next persons age or -1 to quit"<<endl;
		cin>>age;
	}
	
	cout<<"Number of people entered: "<<numberOfPeople<<endl;
	cout<<"Age Total: "<<ageTotal<<endl;
	cout<<"Average age: "<<ageTotal/numberOfPeople<<endl;
	
	
	return 0;
}
