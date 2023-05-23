#include <stdio.h>
#include "calculate_bill.h"

float CalculateBill(int iAmount)
{
    if (iAmount < 0)
    {
        return ERR_INVALID_INPUT;
    }

    float iDiscount = 0.0f;

    if (iAmount >= LIMIT_2)
    {
        iDiscount = iAmount * RATE_3;
    }
    else if (iAmount >= LIMIT_1)
    {
        iDiscount = iAmount * RATE_2;
    }
    else
    {
        iDiscount = iAmount * RATE_1;
    }

    return iAmount - iDiscount;
}