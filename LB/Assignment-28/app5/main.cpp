#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{

    UINT iResult = 0;
    UINT iMask = 0xF000000F; // First and Last nibble bits mask

    iResult = iNo ^ iMask; // Toggling the First and Last nibble bits

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

    return 0;
}