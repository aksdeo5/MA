#include <stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str == ' ') || (*str == '\t'))
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[40];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return 0;
}
