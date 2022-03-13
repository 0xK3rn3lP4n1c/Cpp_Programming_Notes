#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream kernelsFile("anotherTest.txt");

    if(kernelsFile.is_open()){

        cout << "The file is open " << endl;

    }else{

        cout << "The file cannot be opened " << endl;
    }


    kernelsFile << "This is an easier way to write on a file \n";
    kernelsFile.close();

}