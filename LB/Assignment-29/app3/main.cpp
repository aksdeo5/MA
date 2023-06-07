#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x00000900; // 9th and 12th bit mask

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout << "Enter a number: ";
    cin >> iValue;

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        cout << "TURE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
}
