#include <stdio.h>

// Time Complexity: O(1)
void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small.\n");
    }
    if (iNo >= 50 && iNo < 100)
    {
        printf("Medium.\n");
    }
    if (iNo >= 100)
    {
        printf("Large.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}