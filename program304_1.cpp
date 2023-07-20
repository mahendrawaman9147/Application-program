#include<iostream>
using namespace std;

typedef struct node
{
    public:
        int data;
        struct node *next;

         node()
        {
            data = 0;
            next = NULL;
        }

        node(int value)
        {
            data = value;
            next = NULL;
        }
}NODE,*PNODE;

class LinkedList
{
   public:
        PNODE First;
        int iCount;
    
        LinkedList()
        {
            First = NULL;
            iCount = 0;
        }

        virtual void InsertFirst(int no) = 0;
        virtual void InsertLast(int no)= 0;
        virtual void InsertAtPos(int no, int ipos) = 0;

        virtual void deleteFirst() = 0;
        virtual void deleteLast() = 0;
        virtual void deleteAtPos(int ipos) = 0;

    void Display()
    {
         PNODE temp = First;

            for(int iCnt = 1;iCnt <= iCount;iCnt++)
            {
                cout<<"| "<<temp -> data<<" |->";
                temp = temp -> next;
            }
            cout<<"NULL"<<"\n";
    }
    int Count()
    {
        return iCount;
    }

};

class SinglyCL : public LinkedList
{

    private:
        PNODE Last;
    
    public:

        SinglyCL();
        ~SinglyCL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int no, int ipos);

        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int ipos);
};

SinglyCL::SinglyCL()
{
    Last = NULL;
}
SinglyCL::~SinglyCL()
{

}

void SinglyCL::InsertFirst(int no)
{
    PNODE newn = new NODE(no);
    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    Last -> next = First;
    iCount++;
}
void SinglyCL::InsertLast(int no)
{
    PNODE newn = new NODE(no);
    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
       Last -> next = newn;
       Last = newn;
    }
    Last -> next = First;
    iCount++;
}

void SinglyCL::deleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First -> next;
        delete Last -> next;
        Last -> next = First;
    }
    iCount--;
}
void SinglyCL::deleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;
        while(temp -> next != Last)
        {
            temp = temp -> next;
        }

        delete Last;
        Last = temp;
        Last-> next = First;

    }
    iCount--;
}
void SinglyCL::InsertAtPos(int no,int ipos)
{
    if((ipos < 1) || (ipos > iCount + 1))
    {
        printf("Invalid position \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no); 
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1;iCnt < ipos -1;iCnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE(no);

        newn -> next = temp -> next;
        temp -> next = newn;
        iCount++;
    }   
}
void SinglyCL::deleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > iCount))
    {
        printf("Invalid position \n");
        return;
    }
    if(ipos == 1)
    {
        deleteFirst();
    }
    else if(ipos == iCount)
    {
        deleteLast(); 
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int iCnt = 1;iCnt < ipos -1;iCnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;
        temp -> next = temp -> next -> next;
        delete tempX;
        iCount--;


    }   
}
int main()
{
    SinglyCL obj;

    obj.InsertFirst(33);
    obj.InsertFirst(22);
    obj.InsertFirst(11);
    obj.InsertLast(44);
    obj.InsertLast(55);
    obj.InsertLast(66);

    obj.Display();
    cout<<"Length of Linked List are "<<obj.Count()<<"\n";

    obj.InsertAtPos(40,4);
    obj.Display();
    cout<<"Length of Linked List are "<<obj.Count()<<"\n";

    obj.deleteAtPos(4);
    obj.Display();
    cout<<"Length of Linked List are "<<obj.Count()<<"\n";

    obj.deleteFirst();
    obj.deleteLast();
    obj.Display();
    cout<<"Length of Linked List are "<<obj.Count()<<"\n";


    return 0;
}