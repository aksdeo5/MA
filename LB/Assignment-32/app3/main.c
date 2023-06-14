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

void displayProduct(PNODE);
int getProductOfDigits(int);

int main()
{

    PNODE first = NULL;

    insertFirst(&first, 41);
    insertFirst(&first, 32);
    insertFirst(&first, 20);
    insertFirst(&first, 11);

    displayProduct(first);

    return 0;
}

void displayProduct(PNODE head)
{
    while (head != NULL)
    {
        printf("%d\t", getProductOfDigits(head->data));
        head = head->next;
    }
    printf("\n");
}

int getProductOfDigits(int iNo)
{
    int iDigit = 0;
    int iProd = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iProd = iProd * iDigit;
        }
        iNo = iNo / 10;
    }

    return iProd;
}
