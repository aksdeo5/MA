#include <stdio.h>

void strlwrX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    strlwrX(arr);

    printf("Modified string: %s\n", arr);

    return 0;
}
