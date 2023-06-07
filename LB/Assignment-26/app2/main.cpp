#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010; // 5th and 18th bit mask
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
        cout << "Both of the 5th and 18th bits are ON." << endl;
    }
    else
    {
        cout << "Either or both of the 5th and 18th bits are OFF." << endl;
    }
}