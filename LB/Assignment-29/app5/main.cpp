#include <iostream>
#include <cstdlib>

using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    if ((iStart < 1) || (iStart > 32) || (iEnd < 1) || (iEnd > 32) || (iStart > iEnd))
    {
        cout << "Invalid input provided for the bit position! Program will terminate.";
        exit(EXIT_FAILURE);
    }

    UINT iResult = 0;
    UINT iMask = 0x00000001;
    UINT iMaskRange = 0x00000000;
    int iCount = 0;
    for (iCount = iStart; iCount <= iEnd; iCount++) // 'iStart'th to 'iEnd'th range bit mask
    {
        iMaskRange = iMaskRange | (iMask << (iCount - 1));
    }

    iResult = iNo ^ iMaskRange;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iBitStart = 0;
    int iBitEnd = 0;
    UINT iRet = 0;

    cout << "Enter a number: ";
    cin >> iValue;

    cout << "Enter start bit postion of range(Inclusive): ";
    cin >> iBitStart;

    cout << "Enter end bit postion of range(Inclusive): ";
    cin >> iBitEnd;

    iRet = ToggleBitRange(iValue, iBitStart, iBitEnd);

    cout << "Result: " << iRet << endl;
}
