#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void Reverse(char *str)
{
    char *start = str;
    while (*str != '\0')
    {
        str++;
    }
    str--;

    while (str >= start)
    {
        printf("%c", *str);
        str--;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}
