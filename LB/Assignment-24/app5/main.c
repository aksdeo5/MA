#include <stdio.h>

void StrRevX(char *str)
{
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string: %s\n", arr);

    return 0;
}
