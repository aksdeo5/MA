#include <stdio.h>

// Time Complexity: O(1)
int Count(int iNo)
{
    int iFrequency = 0;

    while (iNo != 0)
    {
        if ((iNo % 10) < 6)
        {
            iFrequency++;
        }

        iNo = iNo / 10;
    }

    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;
}