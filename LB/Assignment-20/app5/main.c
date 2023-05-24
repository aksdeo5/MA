#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
    case 'A':
    case 'a':
        printf("Your exam is at 07.00 AM.\n");
        break;

    case 'B':
    case 'b':
        printf("Your exam is at 08.30 AM.\n");
        break;

    case 'C':
    case 'c':
        printf("Your exam is at 09.20 AM.\n");
        break;

    case 'D':
    case 'd':
        printf("Your exam is at 10.30 AM.\n");
        break;

    default:
        printf("Invalid input provided for Your Division...\n");
        break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
