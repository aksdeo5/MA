#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;

    UINT iMask = 0x00000240; // 7th and 10th bit mask

    iResult = iNo ^ iMask; // Toggling 7th and 10th bit

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