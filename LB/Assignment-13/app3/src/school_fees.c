#include "school_fees.h"

int SchoolFees(int iStandard)
{
    int fees = 0;

    switch (iStandard)
    {
    case FIRST_STD:
        fees = FIRST_STD_FEES;
        break;

    case SECOND_STD:
        fees = SECOND_STD_FEES;
        break;

    case THIRD_STD:
        fees = THIRD_STD_FEES;
        break;

    case FOURTH_STD:
        fees = FOURTH_STD_FEES;
        break;

    default:
        fees = ERR_INVALID_INPUT;
        break;
    }

    return fees;
}