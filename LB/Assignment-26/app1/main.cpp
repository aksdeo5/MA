#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000; // 15th bit mask
    UINT iResult = iNo & iMask;

    return (iMask == iResult);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter a number: ";
    cin >> iValue;

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        cout << "15th bit is ON." << endl;
    }
    else
    {
        cout << "15th bit is OFF." << endl;
    }
}