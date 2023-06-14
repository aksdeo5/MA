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

void displayLarge(PNODE);
int getLargestDigit(int);

int main()
{

    PNODE first = NULL;

    insertFirst(&first, 419);
    insertFirst(&first, 532);
    insertFirst(&first, 250);
    insertFirst(&first, 11);

    displayLarge(first);

    return 0;
}

void displayLarge(PNODE head)
{
    while (head != NULL)
    {
        printf("%d\t", getLargestDigit(head->data));
        head = head->next;
    }
    printf("\n");
}

int getLargestDigit(int iNo)
{
    int iDigit = 0;
    int iLargest = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iLargest = iNo % 10;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > iLargest)
        {
            iLargest = iDigit;
        }
        iNo = iNo / 10;
    }

    return iLargest;
}
