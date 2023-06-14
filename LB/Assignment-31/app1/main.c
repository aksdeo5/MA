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

void displayPerfect(PNODE);
BOOL isPerfect(int);

int main()
{
    PNODE first = NULL;

    insertFirst(&first, 89);
    insertFirst(&first, 6);
    insertFirst(&first, 41);
    insertFirst(&first, 17);
    insertFirst(&first, 28);
    insertFirst(&first, 11);

    displayPerfect(first);

    return 0;
}

void displayPerfect(PNODE head)
{

    if (head != NULL)
    {
        while (head != NULL)
        {
            if (isPerfect(head->data))
            {
                printf("%d\t", head->data);
            }
            head = head->next;
        }
    }
}

BOOL isPerfect(int iNo)
{
    int iDivisor = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iDivisor = 1; iDivisor <= (iNo / 2); iDivisor++)
    {
        if ((iNo % iDivisor) == 0)
        {
            iSum = iSum + iDivisor;
        }
    }

    return (iSum == iNo);
}
