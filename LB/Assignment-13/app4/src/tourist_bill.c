#include "tourist_bill.h"

int TouristBill(int iKilometer)
{
    if (iKilometer < 0)
    {
        return ERR_INVALID_INPUT;
    }

    int iBill = 0;

    if (iKilometer > LIMIT)
    {
        iBill = LIMIT * RATE_1;
        iBill += (iKilometer - LIMIT) * RATE_2;
    }
    else
    {
        iBill = iKilometer * RATE_1;
    }

    return iBill;
}