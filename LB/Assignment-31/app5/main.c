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

void displaySumDigit(PNODE);
int getSumofDigits(int);

int main()
{
    PNODE first = NULL;

    insertFirst(&first, 640);
    insertFirst(&first, 240);
    insertFirst(&first, 20);
    insertFirst(&first, 230);
    insertFirst(&first, 110);

    displaySumDigit(first);

    return 0;
}

void displaySumDigit(PNODE head)
{
    PNODE temp = head;

    if ((head != NULL))
    {
        while (head != NULL)
        {
            printf("%d\t", getSumofDigits(head->data));
            head = head->next;
        }
        printf("\n");
    }
}

int getSumofDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}
