#include <iostream>
#include <fstream>
using namespace std;


int selectMenu();
void displayItems(int x);

//main function
int main()
{
    int menuSelector;

    menuSelector = selectMenu();

    while (menuSelector != 4)
    {
        switch (menuSelector)
        {
        case 1:
                displayItems(1);
            break;
        case 2:
                displayItems(2);
            break;
        case 3:
                displayItems(3);
            break;
        default:
            break;
        }
        menuSelector = selectMenu();
    }  
}


//selectMenu funciton
int selectMenu()
{
    int choice;

    cout << "\nEnter the according numbers for Menu: " << endl;
    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program\n" << endl;

    cin >> choice;

    return choice;
}

//displayItems function
void displayItems(int x)
{
    ifstream itemsFile("Items.txt");
    string name;
    double power;

    if (x == 1)
    {
        while (itemsFile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << " " << power << endl;
            }  
        }   
    }

    if (x == 2)
    {
        while (itemsFile >> name >> power)
        {
            if (power > 0)
            {
                cout << name << " " << power << endl;
            }  
        }   
    }

    if (x == 3)
    {
        while (itemsFile >> name >> power)
        {
            if (power < 0)
            {
                cout << name << " " << power << endl;
                if (power < -900)
                {
                    cout << "// This one is babayega force !!" << endl;
                }
            } 
        }   
    } 
}