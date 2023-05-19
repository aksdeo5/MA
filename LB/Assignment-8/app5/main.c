#include <stdio.h>

// Time Complexity: O(1)
int CountDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iSumEven = 0;
    int iSumOdd = 0;

    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}