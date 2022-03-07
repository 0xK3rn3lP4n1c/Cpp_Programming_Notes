#include <iostream>
using namespace std; 


int main()
{
    int arr1[2][3] = {{1,2,3}, {7,8,9}};

    for (int i = 0; i < 2; i++) //First the row
    {
        for (int x = 0; x < 3; x++) //Then the column
        {
            cout << arr1[i][x] << " ";
        }
        cout << endl;
    }
    
    return 0;
}