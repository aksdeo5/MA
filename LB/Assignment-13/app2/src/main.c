#include <stdio.h>
#include "income_tax.h"

int main()
{
    int iAmount = 0;
    float fIT = 0.0f;

    printf("Enter Gross Income: ");
    scanf("%d", &iAmount);

    fIT = IncomeTax(iAmount);

    if (fIT == ERR_INVALID_INPUT)
    {
        printf("Invalid input provided for Gross Income...\n");
    }
    else
    {
        printf("Tax Amount: %.2f\n", fIT);
    }

    return 0;
}
