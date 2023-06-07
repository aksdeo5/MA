#include <iostream>

using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iCount = 0;
    UINT iMask = 0x00000001;

    while (iNo != 0)
    {
        if ((iNo & iMask) == iMask)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout << "Enter a number: ";
    cin >> iValue;

    iRet = CountOne(iValue);

    cout << "Result: " << iRet << endl;
}