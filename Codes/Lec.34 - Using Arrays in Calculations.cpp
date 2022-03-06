#include <iostream>
using namespace std;


int main()
{
    int kernelNum[5] = {23, 44, 123, 545, 666};
    int kernelSum = 0;


    for (int i = 0; i < 5; i++)
    {
        kernelSum = kernelNum[i] + kernelSum; // could use kernelSum += kernelNum[i]; as well. 
    }
    
    cout << kernelSum << endl;


    return 0;
}