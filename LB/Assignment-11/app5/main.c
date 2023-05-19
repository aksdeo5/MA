#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
int Product(int arr[], int iLength)
{
    int iProd = 1;
    int iOddCount = 0;

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((arr[iCnt] % 2) != 0)
        {
            iProd = iProd * arr[iCnt];
            iOddCount++;
        }
    }

    if (iOddCount == 0)
    {
        iProd = 0;
    }

    return iProd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Product(p, iSize);

    printf("Product is %d.\n", iRet);

    free(p);

    return 0;
}