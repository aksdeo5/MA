#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Time Complexity
// Worst-case: O(n)
// Best-case: O(1)
BOOL Check(int arr[], int iLength, int iNo)
{
    BOOL flag = FALSE;

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            flag = TRUE;
            break;
        }
    }

    return flag;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);

    if (bRet == TRUE)
    {
        printf("Number is present.\n");
    }
    else
    {
        printf("Number is not present.\n");
    }

    free(p);

    return 0;
}