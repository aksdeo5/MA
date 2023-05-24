#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if ((*str == 'A') || (*str == 'a') ||
            (*str == 'E') || (*str == 'e') ||
            (*str == 'I') || (*str == 'i') ||
            (*str == 'O') || (*str == 'o') ||
            (*str == 'U') || (*str == 'u'))
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
    BOOL bRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel.\n");
    }
    else
    {
        printf("There is no Vowel.\n");
    }

    return 0;
}
