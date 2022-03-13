#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream theFileRead("Players.txt");

    int id;
    string name;
    double money;

    while(theFileRead >> id >> name >> money){
        cout << id << " " << name << " " << money << "$" << endl;

    }


}