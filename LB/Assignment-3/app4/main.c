#include <stdio.h>

// Time Complexity: O(n)
int SumNonFact(int iNo)
{
    int iSum = 0;

    int iDivisor = 0;
    for (iDivisor = 1; iDivisor < iNo; iDivisor++)
    {
        if ((iNo % iDivisor) != 0)
        {
            iSum = iSum + iDivisor;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}