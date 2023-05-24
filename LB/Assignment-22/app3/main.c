#include <stdio.h>

int Difference(char *str)
{
    int iFreqSmall = 0;
    int iFreqCap = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iFreqSmall++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iFreqCap++;
        }

        str++;
    }

    return iFreqSmall - iFreqCap;
}

int main()
{
    char arr[20];

    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}
