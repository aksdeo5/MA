#include <stdio.h>
#include <stdlib.h>

int SumOfDigits(int);

// Time Complexity: O(n)
void DigitsSum(int arr[], int iLength)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t", SumOfDigits(arr[iCnt]));
    }
    printf("\n");
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}

int SumOfDigits(int iNo)
{
    int iSum = 0;

    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}
