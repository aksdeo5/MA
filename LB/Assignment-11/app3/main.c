#include <stdio.h>
#include <stdlib.h>

// Time Complexity
// Worst-case: O(n)
// Best-case: O(1)
int LastOcc(int arr[], int iLength, int iNo)
{
    int iIndex = -1;

    int iCnt = 0;
    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if (arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            break;
        }
    }

    return iIndex;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

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

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number.\n");
    }
    else
    {
        printf("Last occurence of number is at index %d.\n", iRet);
    }

    free(p);

    return 0;
}