#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

// 1 : allocate memory for new node
// 2 : Initilise the node
// 3 : check whether LL is empty of not
// 1 : if LL is empty store address of newnode in first
// 1 : Otherwise store the address of newnode inside next pointer of old first node
// 1 : update first pointer with address of new node

void InsertFirst(PNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn->data= no;
    newn->next= NULL;

    if(*Head == NULL)
    {
       *Head = newn;
    }
    else
    {
       newn -> next = *Head;
       *Head = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements of Linkedlist are :\n");

    while(Head != NULL)
    {
        printf("| %d |->",Head -> data);
        Head = Head-> next;
    }

}
void InsertLast(PNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn -> data= no;
    new -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
         while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}
int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
}
void DeleteFirst(PNODE Head,int no)
{

}
int main()
{
    PNODE First = NULL;
    int iRet = 0;


    InsertFirst(&First,55);
    InsertFirst(&First,44);
    InsertFirst(&First,33);
    InsertFirst(&First,22);
    InsertFirst(&First,11);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are :%d\n",iRet);


    return 0;
}