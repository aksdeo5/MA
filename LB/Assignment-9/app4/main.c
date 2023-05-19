#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
void Display(int arr[], int iLength)
{

    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((arr[iCnt] % 3 == 0) && (arr[iCnt] % 5 == 0))
        {
            printf("%d\t", arr[iCnt]);
        }
    }
    printf("\n");
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

    Display(p, iSize);

    free(p);

    return 0;
}