#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{

    int kernel[3] = {12, 33, 61};
    int BSoD[6] = {99, 21, 44, 76, 57, 83};

    cout << "Kernel: " << endl;
    printArray(kernel, 3); //When you are writing the array in the function you don't need "[]"
    cout << "BSoD: " << endl;
    printArray(BSoD, 5);

    return 0;
}

void printArray(int theArray[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << theArray[i] << endl;
    }
    


}