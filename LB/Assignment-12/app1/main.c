#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
int Maximum(int arr[], int iLength)
{
    int iMax = arr[0];

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

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

    iRet = Maximum(p, iSize);

    printf("Largest number is %d.\n", iRet);

    free(p);

    return 0;
}