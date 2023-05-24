#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int index = -1;
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            index = iCnt;
            break;
        }

        iCnt++;
        str++;
    }

    return index;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Charcter location: %d\n", iRet);

    return 0;
}
