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

void reverse(PNODE);
int getReversed(int);
void display(PNODE);

int main()
{

    PNODE first = NULL;

    insertFirst(&first, 89);
    insertFirst(&first, 6);
    insertFirst(&first, 41);
    insertFirst(&first, 17);
    insertFirst(&first, 28);
    insertFirst(&first, 11);

    display(first);

    reverse(first);

    display(first);

    return 0;
}

void reverse(PNODE head)
{

    if (head != NULL)
    {
        while (head != NULL)
        {
            head->data = getReversed(head->data);
            head = head->next;
        }
    }
}

int getReversed(int iNo)
{
    int iDigit = 0;
    int iNoMod = 0;
    int iReversed = 0;

    if (iNo < 0)
    {
        iNoMod = -iNo;
    }
    else
    {
        iNoMod = iNo;
    }

    while (iNoMod != 0)
    {
        iDigit = iNoMod % 10;
        iReversed = iReversed * 10 + iDigit;
        iNoMod = iNoMod / 10;
    }

    if (iNo < 0)
    {
        iReversed = -iReversed;
    }

    return iReversed;
}

void display(PNODE head)
{
    while (head != NULL)
    {
        printf("|%d| -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
