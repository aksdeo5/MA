#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001; // First and Last bits mask
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
        cout << "Both of the first and last bits are ON." << endl;
    }
    else
    {
        cout << "Either or both of the first and last bits are OFF." << endl;
    }
}