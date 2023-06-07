#include <iostream>
#include <cstdlib>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
    if (iPos < 1 || iPos > 32)
    {
        cout << "Invalid input provided for the bit position! Program will terminate.";
        exit(EXIT_FAILURE);
    }

    UINT iResult = 0;
    UINT iMask = 0x00000001;
    iMask = iMask << (iPos - 1); // 'iPos'th bit mask

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    int iBit = 0;
    bool bRet = 0;

    cout << "Enter a number: ";
    cin >> iValue;

    cout << "Enter the bit position: ";
    cin >> iBit;

    bRet = ChkBit(iValue, iBit);

    if (bRet == true)
    {
        cout << "TURE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
}