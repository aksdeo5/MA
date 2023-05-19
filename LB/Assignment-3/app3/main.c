#include <stdio.h>

// Time Complexity: O(n)
void NonFact(int iNo)
{
    int iDivisor = 0;
    for (iDivisor = 1; iDivisor < iNo; iDivisor++)
    {
        if ((iNo % iDivisor) != 0)
        {
            printf("%d\t", iDivisor);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}