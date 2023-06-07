#include <iostream>
#include <cstdlib>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
    if ((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        cout << "Invalid input provided for the bit position! Program will terminate.";
        exit(EXIT_FAILURE);
    }

    UINT iResult1 = 0;
    UINT iResult2 = 0;
    UINT iMask = 0x00000001;
    UINT iMask1 = iMask << (iPos1 - 1); // 'iPos1'th bit mask
    UINT iMask2 = iMask << (iPos2 - 1); // 'iPos2'th bit mask

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    return ((iResult1 == iMask1) || (iResult2 == iMask2));
}

int main()
{
    UINT iValue = 0;
    int iBit1 = 0;
    int iBit2 = 0;
    bool bRet = false;

    cout << "Enter a number: ";
    cin >> iValue;

    cout << "Enter first bit postion: ";
    cin >> iBit1;

    cout << "Enter second bit postion: ";
    cin >> iBit2;

    bRet = ChkBit(iValue, iBit1, iBit2);

    if (bRet == true)
    {
        cout << "TURE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
}
