#include <stdio.h>
#include "school_fees.h"

int main()
{
    int iFees = 0;
    int iGrade = 0;

    printf("Enter the Grade: ");
    scanf("%d", &iGrade);

    iFees = SchoolFees(iGrade);

    if (iFees == ERR_INVALID_INPUT)
    {
        printf("Invalid input provided for Grade...\n");
    }
    else
    {
        printf("Fees: %d\n", iFees);
    }

    return 0;
}
