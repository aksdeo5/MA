#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1

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

int searchLastOcc(PNODE, int);

int main()
{
    int iRet = 0;

    PNODE first = NULL;

    insertFirst(&first, 70);
    insertFirst(&first, 30);
    insertFirst(&first, 50);
    insertFirst(&first, 40);
    insertFirst(&first, 30);
    insertFirst(&first, 20);
    insertFirst(&first, 10);

    iRet = searchLastOcc(first, 30);

    if (iRet == NOT_FOUND)
    {
        printf("Element not found!\n");
    }
    else
    {

        printf("Result: %d\n", iRet);
    }

    return 0;
}

int searchLastOcc(PNODE head, int iNo)
{
    int iPos = -1;
    int iCount = 1;

    if (head != NULL)
    {
        while (head != NULL)
        {
            if (head->data == iNo)
            {
                iPos = iCount;
            }
            iCount++;
            head = head->next;
        }
    }

    return iPos;
}
