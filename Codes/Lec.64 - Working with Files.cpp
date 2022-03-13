#include <iostream>
#include <fstream> // Header file for files :)
using namespace std;


int main()
{
    ofstream kernelFile; // We need to build an object first since c++ can't directly work on files 

    kernelFile.open("Test.txt");

    kernelFile << "Wow now I can write on to this File ! \n";
    kernelFile << "To write on this file we need to use kernelFile instead of cout \n";

    kernelFile.close();

}