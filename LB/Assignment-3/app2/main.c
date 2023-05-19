#include <stdio.h>

// Time Complexity: O(n)
void FactRev(int iNo)
{
    int iDivisor = 0;
    for (iDivisor = (iNo / 2); iDivisor >= 1; iDivisor--)
    {
        if ((iNo % iDivisor) == 0)
        {
            printf("%d\t", iDivisor);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}