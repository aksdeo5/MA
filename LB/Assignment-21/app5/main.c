#include <stdio.h>

void Display(char ch)
{
    printf("Decimal Value of %c: %d\n", ch, ch);
    printf("Octal Value of %c: %o\n", ch, ch);
    printf("Hexadecimal Value of %c: %x\n", ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
