#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

// Time Complexity: O(1)
BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if (bRet == TRUE)
    {
        printf("Greater.\n");
    }
    else
    {
        printf("Not Greater.\n");
    }

    return 0;
}