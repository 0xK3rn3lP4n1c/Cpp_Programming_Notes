#include <iostream>
using namespace std;


void age (int x) { 
	cout<<"I am "<<x<<" years old"<<endl; 
}

void agecl(int z) {
	cout<<"Cool, so you're "<<z<<" years old";
}

int main () {
	
	int y;
	
	cout<<"Hello Stranger! My name is CppBot"<<endl;
	age(22);
	cout<<"How old are you ?"<<endl;
	cin>>y;
	agecl(y);
	

	return 0;
}
