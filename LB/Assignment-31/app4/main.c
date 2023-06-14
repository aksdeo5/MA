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

int secMaximum(PNODE);

int main()
{
    int iRet = 0;

    PNODE first = NULL;

    insertFirst(&first, 240);
    insertFirst(&first, 320);
    insertFirst(&first, 230);
    insertFirst(&first, 110);

    iRet = secMaximum(first);

    printf("Result: %d\n", iRet);

    return 0;
}

int secMaximum(PNODE head)
{
    int iMax = 0;
    int iSecMax = 0;
    PNODE temp = head;

    if ((temp != NULL) && (temp->next != NULL))
    {
        iMax = temp->data;
        while (temp != NULL)
        {
            if (temp->data > iMax)
            {
                iMax = temp->data;
            }
            temp = temp->next;
        }

        temp = head;

        iSecMax = temp->data;
        while (temp != NULL)
        {
            if ((temp->data > iSecMax) && (temp->data < iMax))
            {
                iSecMax = temp->data;
            }
            temp = temp->next;
        }

        if (iSecMax == iMax)
        {
            printf("Error: Cannot determine second maximum element from a Linked-list having all equal elements! Program will terminate...\n");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        printf("Error: Cannot determine second maximum element from a Linked-list having less than two elements! Program will terminate...\n");
        exit(EXIT_FAILURE);
    }

    return iSecMax;
}
