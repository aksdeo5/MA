#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Time Complexity
// Worst-case: O(n)
// Best-case: O(1)
BOOL Check(int arr[], int iLength)
{
    BOOL flag = FALSE;

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            flag = TRUE;
            break;
        }
    }

    return flag;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    bRet = Check(p, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present.\n");
    }
    else
    {
        printf("11 is absent.\n");
    }

    free(p);

    return 0;
}