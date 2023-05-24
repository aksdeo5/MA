#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }

        str++;
    }

    return (*str != '\0');
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character found.\n");
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}
