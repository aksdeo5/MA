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

void displaySmall(PNODE);
int getSmallestDigit(int);

int main()
{

    PNODE first = NULL;

    insertFirst(&first, 415);
    insertFirst(&first, 532);
    insertFirst(&first, 250);
    insertFirst(&first, 11);

    displaySmall(first);

    return 0;
}

void displaySmall(PNODE head)
{
    while (head != NULL)
    {
        printf("%d\t", getSmallestDigit(head->data));
        head = head->next;
    }
    printf("\n");
}

int getSmallestDigit(int iNo)
{
    int iDigit = 0;
    int iSmallest = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iSmallest = iNo % 10;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < iSmallest)
        {
            iSmallest = iDigit;
        }
        iNo = iNo / 10;
    }

    return iSmallest;
}
