#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;

    UINT iMask = 0x0000000F; // First 4 bits mask

    iResult = iNo | iMask; // Turning-on all of first 4 bits if any of them is OFF.

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter a number: ";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Result: " << iRet << endl;
}