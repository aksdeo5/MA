#include <stdio.h>

// Time Complexity: O(n^2)
void Pattern(int iRows, int iCols)
{
    if (iRows != iCols)
    {
        printf("Invalid input, the number of Rows and Columns must be equal...\n");
        return;
    }

    int i = 0, j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCols; j++)
        {
            if (j == i)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
