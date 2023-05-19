#include <stdio.h>

// Time Complexity: O(1)
int MultDigits(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iMult = 1;

    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}