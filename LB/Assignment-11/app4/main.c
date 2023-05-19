#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
void Range(int arr[], int iLength, int iStart, int iEnd)
{

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((arr[iCnt] >= iStart) && (arr[iCnt] <= iEnd))
        {
            printf("%d\t", arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements...\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}