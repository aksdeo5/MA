#include <stdio.h>
#include "tourist_bill.h"

int main()
{
    int iRent = 0;
    int iKM = 0;

    printf("Enter number of kilometers: ");
    scanf("%d", &iKM);

    iRent = TouristBill(iKM);

    if (iRent == ERR_INVALID_INPUT)
    {
        printf("Invalid input provided for Number of Kilometers...\n");
    }
    else
    {
        printf("Estimated Rent: %d\n", iRent);
    }

    return 0;
}
