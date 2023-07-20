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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));    //1

    newn-> data = no;                      //2
    newn-> next = NULL;

    if(*Head == NULL)                      //3
    {
        *Head = newn;                      //4
    }
    else
    {
        newn->next = *Head;                //5
        *Head = newn;                      //6
    }

}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));    //1

    PNODE temp = *Head;

    newn-> data = no;                      //2
    newn-> next = NULL;

    if(*Head == NULL)                      //3
    {
        *Head = newn;                      //4
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements of Linkedlist are:\n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head-> next;
    }
}
int Count(PNODE Head)
{
    int iCount = 0;


    while(Head != NULL)
    {
        iCount++;
        Head = Head-> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                        //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL)        // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                                  // LL contains more than one node
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}
void DeleteLast(PPNODE Head,int ipos)
{
    PNODE temp = *Head;

    if(*Head == NULL)                        //LL is empty
    {
        return;
    }
    else if((*Head) -> next != NULL)        // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                                  // LL contains more than one node
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp->next = NULL;
    }
}
void InsertAtPos(PPNODE Head,int no,int ipos)
{
    int iLength  = 0;
    iLength = Count(*Head);                   //calculate length of LL

    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;

    //Filter
    if((ipos < 1) || (ipos > iLength + 1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head,no);
    }
    else if(ipos == iLength + 1)
    {
         InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn-> data = no;                      //2
        newn-> next = NULL;

        for(iCnt = 1;iCnt< ipos -1;iCnt++)
        {
            temp = temp -> next;
        }

        //Sequence is important
        newn-> next = temp -> next;
        temp->next = newn;
    }
}
void DeleteAtPos(PPNODE Head,int ipos)
{
    int iLength  = 0;
    iLength = Count(*Head);                   //calculate length of LL

    PNODE temp = *Head;
    int iCnt = 0;
    PNODE tempX = NULL;

    //Filter
    if((ipos < 1) || (ipos > iLength))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == iLength)
    {
         DeleteLast(Head);
    }
    else
    {
         for(iCnt = 1;iCnt< ipos -1;iCnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;

        //Sequence is important
        temp->next = temp->next->next;
        free(tempX);
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First,11);
    InsertLast(&First,21);
    InsertLast(&First,51);
    InsertLast(&First,101);

    Display(First);

    iRet = Count(First);
    printf("Numbar of nodes are :%d\n",iRet);

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    
    Display(First);

    iRet = Count(First);
    printf("Numbar of nodes are :%d\n",iRet);

    InsertAtPos(&First,25,5);

    Display(First);

    iRet = Count(First);
    printf("Numbar of nodes are :%d\n",iRet);

    DeleteAtPos(&First,5);

    Display(First);

    iRet = Count(First);
    printf("Numbar of nodes are :%d\n",iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);

    Display(First);

    iRet = Count(First);
    printf("Numbar of nodes are :%d\n",iRet);

    return 0;
}