#include <stdio.h>
#include "calculate_bill.h"

int main()
{
    int iAmount = 0;
    float fBill = 0.0f;

    printf("Enter Total Bill Amount: ");
    scanf("%d", &iAmount);

    fBill = CalculateBill(iAmount);

    if (fBill == ERR_INVALID_INPUT)
    {
        printf("Invalid input provided for Total Bill Amount...\n");
    }
    else
    {
        printf("Discount applied: %.2f\n", iAmount - fBill);
        printf("Final Bill: %.2f\n", fBill);
    }

    return 0;
}
