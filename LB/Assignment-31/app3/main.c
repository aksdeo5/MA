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

int additionEven(PNODE);

int main()
{
    int iRet = 0;

    PNODE first = NULL;

    insertFirst(&first, 41);
    insertFirst(&first, 32);
    insertFirst(&first, 20);
    insertFirst(&first, 11);

    iRet = additionEven(first);

    printf("Result: %d\n", iRet);

    return 0;
}

int additionEven(PNODE head)
{
    int iSum = 0;

    if (head != NULL)
    {
        while (head != NULL)
        {
            if ((head->data % 2) == 0)
            {
                iSum = iSum + head->data;
            }
            head = head->next;
        }
    }

    return iSum;
}
