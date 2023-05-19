#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(1)
float Percentage(int iNo1, int iNo2)
{
    if (iNo1 == 0)
    {
        printf("Error: Total marks should not be zero.\n");
        exit(EXIT_FAILURE);
    }

    return (float)iNo2 / iNo1 * 100;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.1f%%\n", fRet);

    return 0;
}