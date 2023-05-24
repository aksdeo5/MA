#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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
        printf("It is a Small-case Alphabet.\n");
    }
    else
    {
        printf("It is not a Small-case Alphabet.\n");
    }

    return 0;
}
