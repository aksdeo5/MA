#include <stdio.h>

// Time Complexity: O(n)
void Pattern(int iNo)
{
    char ch = '\0';
    int iCnt = 0;
    for (iCnt = 1, ch = 'A'; iCnt <= iNo; ch++, iCnt++)
    {
        printf("%c\t", ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
