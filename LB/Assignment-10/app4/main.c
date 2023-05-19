#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
int Frequency(int arr[], int iLength)
{
    int iFreq = 0;

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            iFreq++;
        }
    }

    return iFreq;
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

    iRet = Frequency(p, iSize);

    printf("%d\n", iRet);

    free(p);

    return 0;
}