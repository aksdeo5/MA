#include <stdio.h>

// Time Complexity: O(n)
int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;

    int iDivisor = 0;
    for (iDivisor = 1; iDivisor < iNo; iDivisor++)
    {
        if ((iNo % iDivisor) == 0)
        {
            iSumFact = iSumFact + iDivisor;
        }
        else
        {
            iSumNonFact = iSumNonFact + iDivisor;
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}