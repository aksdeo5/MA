#include <stdio.h>

// Time Complexity: O(n)
int Factorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iFact = 1;

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of the number is %d\n", iRet);

    return 0;
}