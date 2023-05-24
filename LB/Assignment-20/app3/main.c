#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Digit.\n");
    }
    else
    {
        printf("It is not a Digit.\n");
    }

    return 0;
}
