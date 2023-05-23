#include <stdio.h>

// Time Complexity: O(n*m)
void Pattern(int iRows, int iCols)
{
    int iCellValue = 0;

    int i = 0, j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1, iCellValue = i; j <= iCols; iCellValue++, j++)
        {
            printf("%d\t", iCellValue);
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
