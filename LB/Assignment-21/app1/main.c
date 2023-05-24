#include <stdio.h>

void DisplayASCII()
{
    printf("Symbol\tDecimal\tHex\tOctal\n\n");

    int iCnt = 0;
    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        if (iCnt == 9)
        {
            printf("%c\r\t%d\t%x\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%c\t%d\t%x\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
