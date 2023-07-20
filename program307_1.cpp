#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        node *next;
        node *prev;

        node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }
        node(int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
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
        virtual void InsertLast(int no) = 0;
        virtual void InsertAtPos(int no,int ipos) = 0;

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

class DoublyLL : public LinkedList
{
    private:
        PNODE Last;

    public:
        DoublyLL();
        ~DoublyLL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int no, int ipos);

        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int ipos);
};

DoublyLL::DoublyLL()
{
    Last = NULL;
}
DoublyLL::~DoublyLL()
{
    
}
void DoublyLL::InsertFirst(int no)
{
    PNODE newn = new NODE(no);

    if(First == NULL)                 //LL is empty
    {
        First = newn;
    }
    else                             //LL contains atleast onne node in it
    {
        First-> prev = newn;      //#
        newn -> next = First;
        First= newn;
    }
    iCount++;
}
void DoublyLL ::InsertLast(int no)
{
    PNODE newn = new NODE(no);
    PNODE temp = First;
    
    if(First == NULL)           //LL is empty
    {
       First = newn;
    }
    else                       //LL contains atleast onne node in it
    {
        while(temp-> next != NULL)        //type 2
        {
            temp = temp -> next; 
        }
        temp -> next = newn;
        newn -> prev = temp ;          //#
    }
    iCount++;
}

void DoublyLL::deleteFirst()
{
    if(First== NULL)
    {
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First= First-> next;
        delete First -> prev;        //#
        First -> prev = NULL;       //#
    }
    iCount--;
}
void DoublyLL::deleteLast()
{

    if(First == NULL)
    {
        return;
    }
    else if(First -> next == NULL)
    {
       delete First;
       First = NULL;
    }
    else
    {
        PNODE temp = First;
        while(First -> next-> next != NULL)     //type 3
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
}
void DoublyLL::InsertAtPos(int no, int ipos)
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
        PNODE newn = new NODE(no);
        PNODE temp = First;

        for( int iCnt = 1;iCnt < ipos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next ;      //  1 
        temp ->next -> prev = newn;        //# 2
        temp -> next = newn;               //  3
        newn -> prev = temp;               //# 4 
    }
    iCount++;
    
}
void DoublyLL:: deleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > iCount ))
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
        
        for(int iCnt = 1;iCnt < ipos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;
    }
    iCount--;
}
int main()
{
    DoublyLL obj;

    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);

    obj.Display();
    cout<<"Length of Linkedlist are "<<obj.Count()<<"\n";

    obj.InsertAtPos(55,4);
    obj.Display();
    cout<<"Length of Linkedlist are "<<obj.Count()<<"\n";

    obj.deleteAtPos(4);
    obj.Display();
    cout<<"Length of Linkedlist are "<<obj.Count()<<"\n";

    obj.deleteFirst();
    //obj.deleteLast();

    obj.Display();
    cout<<"Length of Linkedlist are "<<obj.Count()<<"\n";



    return 0;
}