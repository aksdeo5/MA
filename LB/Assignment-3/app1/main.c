#include <stdio.h>

// Time Complexity: O(n)
int MultFact(int iNo)
{
    int iMult = 1;

    int iDivisor = 0;
    for (iDivisor = 1; iDivisor <= (iNo / 2); iDivisor++)
    {
        if ((iNo % iDivisor) == 0)
        {
            iMult = iMult * iDivisor;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}