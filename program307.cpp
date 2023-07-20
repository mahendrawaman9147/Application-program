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

        virtual void InsertFirst(int ino) = 0;
        virtual void InsertLast(int ino)= 0;
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
class DoublyCL : public LinkedList
{
    private:
        PNODE Last;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int no, int ipos);

        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int ipos);
};

DoublyCL:: DoublyCL()
{
    Last = NULL;
}
DoublyCL:: ~DoublyCL()
{

}
void DoublyCL::InsertFirst(int ino)
{
    PNODE newn = new NODE(ino);

    if(First==NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn -> next = First;
        First -> prev = newn;
        First = newn;
    }
    Last -> next = First;
    First ->prev = Last;
    iCount++;
}
void DoublyCL::InsertLast(int ino)
{
     PNODE newn = new NODE(ino);

    if(First==NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last -> next = newn;
        newn -> prev = Last;
        Last = Last -> next;
    }
    Last -> next = First;
    First ->prev = Last;
    iCount++;
}

void DoublyCL::deleteFirst()
{
    if(iCount == 0)       // LL is empty
    {
        return;
    }
    else if(iCount == 1) //LL contain one node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else                 //LL contains more than one node
    {
        First=First -> next;
        delete Last -> next;

        Last -> next = First;
        First ->prev = Last; 
    }
    iCount--;
}
void DoublyCL::deleteLast()
{
    if(iCount == 0)       // LL is empty
    {
        return;
    }
    else if(iCount == 1) //LL contain one node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else                 //LL contains more than one node
    {
        Last = Last -> prev;
        delete Last -> next;

        Last -> next = First;
        First ->prev = Last; 
    }
    iCount--;
}
void DoublyCL::InsertAtPos(int ino, int ipos)
{
    if((ipos < 1) || (ipos > iCount +1))
    {
        cout<<"Invlid position\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(ino);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(ino);
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1;iCnt < ipos -1;iCnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE(ino);

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next= newn;
        newn -> prev = temp;

        iCount++;

    }
}

void DoublyCL::deleteAtPos(int ipos)
{
     if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invlid position\n";
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

        for(int iCnt = 1;iCnt < ipos -1;iCnt++)
        {
            temp = temp -> next;
        }
       temp -> next = temp -> next -> next;
       delete temp -> next-> prev;
       temp -> next -> prev = temp;

       iCount--;
    }
}

int main()
{
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<"Length of Linked List is :"<<obj.Count()<<"\n";

    obj.InsertAtPos(55,4);
    obj.Display();
    cout<<"Length of Linked List is :"<<obj.Count()<<"\n";

    obj.deleteAtPos(4);
    obj.Display();
    cout<<"Length of Linked List is :"<<obj.Count()<<"\n";

    obj.deleteFirst();
    obj.deleteLast();
    obj.Display();
    cout<<"Length of Linked List is :"<<obj.Count()<<"\n";

    return 0;
}