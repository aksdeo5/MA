#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Time Complexity: O(1)
BOOL ChkZero(int iNo)
{
    BOOL flag = FALSE;

    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            flag = TRUE;
            break;
        }
        iNo = iNo / 10;
    }

    return flag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("In contains zero.\n");
    }
    else
    {
        printf("There is no zero.\n");
    }

    return 0;
}