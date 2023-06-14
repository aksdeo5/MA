#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void insertFirst(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = iNo;

    if (*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void displayPrime(PNODE);
BOOL isPrime(int);

int main()
{

    PNODE first = NULL;

    insertFirst(&first, 89);
    insertFirst(&first, 22);
    insertFirst(&first, 41);
    insertFirst(&first, 17);
    insertFirst(&first, 20);
    insertFirst(&first, 11);

    displayPrime(first);

    return 0;
}

void displayPrime(PNODE head)
{

    if (head != NULL)
    {
        while (head != NULL)
        {
            if (isPrime(head->data))
            {
                printf("%d\t", head->data);
            }
            head = head->next;
        }
    }
}

BOOL isPrime(int iNo)
{
    int iDivisor = 0;
    BOOL flag = FALSE;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    flag = TRUE;
    for (iDivisor = 2; iDivisor <= (iNo / 2); iDivisor++)
    {
        if ((iNo % iDivisor) == 0)
        {
            flag = FALSE;
            break;
        }
    }

    return flag;
}
