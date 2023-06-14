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

void displayPalindrome(PNODE);
BOOL isPalindrome(int);
int getReversed(int);

int main()
{
    PNODE first = NULL;

    insertFirst(&first, 89);
    insertFirst(&first, 6);
    insertFirst(&first, 414);
    insertFirst(&first, 17);
    insertFirst(&first, 28);
    insertFirst(&first, 11);

    displayPalindrome(first);

    return 0;
}

void displayPalindrome(PNODE head)
{
    while (head != NULL)
    {
        if (isPalindrome(head->data))
        {
            printf("%d\t", head->data);
        }
        head = head->next;
    }
    printf("\n");
}

BOOL isPalindrome(int iNo)
{
    return (iNo == getReversed(iNo));
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
