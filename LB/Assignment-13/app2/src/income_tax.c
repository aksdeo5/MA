#include "income_tax.h"

float IncomeTax(int iAmount)
{
    if (iAmount < 0)
    {
        return ERR_INVALID_INPUT;
    }

    float fIT = 0.0f;

    if (iAmount > LIMIT_3)
    {
        fIT = LIMIT_1 * RATE_1;
        fIT += (LIMIT_2 - LIMIT_1) * RATE_2;
        fIT += (LIMIT_3 - LIMIT_2) * RATE_3;
        fIT += (iAmount - LIMIT_3) * RATE_4;
    }
    else if (iAmount > LIMIT_2)
    {
        fIT = LIMIT_1 * RATE_1;
        fIT += (LIMIT_2 - LIMIT_1) * RATE_2;
        fIT += (iAmount - LIMIT_2) * RATE_3;
    }
    else if (iAmount > LIMIT_1)
    {
        fIT = LIMIT_1 * RATE_1;
        fIT += (iAmount - LIMIT_1) * RATE_2;
    }
    else
    {
        fIT = iAmount * RATE_1;
    }

    return fIT;
}