#include <stdio.h>

// Time Complexity: O(n*m)
void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    for (i = 1; i <= iRows; i++)
    {
        if ((i % 2) != 0)
        {
            for (j = 1; j <= iCols; j++)
            {
                printf("%5d\t", j);
            }
        }
        else
        {
            for (j = 1; j <= iCols; j++)
            {
                printf("%5d\t", -j);
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
