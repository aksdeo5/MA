#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x00000240; // 7th and 10th bit mask

    iResult = iNo & (~iMask); // Turning-off the 7th and 10th bits if they are ON

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter a number: ";
    cin >> iValue;

    iRet = OffBit(iValue);

    cout << "Result: " << iRet << endl;
}