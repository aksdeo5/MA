#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0; // 7th, 8th and 9th bits mask
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
        cout << "All of 7th, 8th and 9th bits are ON." << endl;
    }
    else
    {
        cout << "One or more of 7th, 8th and 9th bits are OFF." << endl;
    }
}