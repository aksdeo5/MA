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

int maximum(PNODE);

int main()
{
    int iRet = 0;

    PNODE first = NULL;

    insertFirst(&first, 240);
    insertFirst(&first, 320);
    insertFirst(&first, 230);
    insertFirst(&first, 110);

    iRet = maximum(first);

    printf("Result: %d\n", iRet);

    return 0;
}

int maximum(PNODE head)
{
    int iMax = 0;

    if (head != NULL)
    {
        iMax = head->data;
        while (head != NULL)
        {
            if (head->data > iMax)
            {
                iMax = head->data;
            }
            head = head->next;
        }
    }
    else
    {
        printf("Error: Cannot determine the maximum of an empty Linked-list! Program will terminate...\n");
        exit(EXIT_FAILURE);
    }

    return iMax;
}
