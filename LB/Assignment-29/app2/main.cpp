#include <iostream>

using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iPos = 1;
    UINT iMask = 0x00000001;

    while ((iNo1 != 0) && (iNo2 != 0))
    {
        if (((iNo1 & iMask) == iMask) && ((iNo2 & iMask) == iMask))
        {
            cout << iPos << "\t";
        }
        iNo1 = iNo1 >> iMask;
        iNo2 = iNo2 >> iMask;
        iPos++;
    }
    cout << endl;
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    cout << "Enter first number: ";
    cin >> iValue1;

    cout << "Enter second number: ";
    cin >> iValue2;

    CommonBits(iValue1, iValue2);
}
