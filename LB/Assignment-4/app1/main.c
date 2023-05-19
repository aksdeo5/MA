#include <stdio.h>

int main()
{
    char Name[30];

    printf("Enter number full-name: ");
    fgets(Name, 30, stdin);

    printf("%s\n", Name);

    return 0;
}