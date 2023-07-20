#include<iostream>
using namespace std;

typedef class node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;
    
    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int ino);
        void InsertAtPos(int ino,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();

};

void SinglyLL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    iCount++;
}
void SinglyLL:: InsertLast(int ino)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL:: DeleteFirst()
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
        First = First -> next;
        delete temp;
    }
    iCount--;
}
void SinglyLL:: DeleteLast()
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
        
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
}

void SinglyLL:: Display()
{
    PNODE temp = First;
    cout<<"Elements are Singly linked list\n";

    while(First != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> data;
    }
    cout<<"NULL\n";
}
int SinglyLL:: Count()
{
    return iCount;
}
void SinglyLL:: InsertAtPos(int ino,int ipos)
{
    if((ipos < 1) || (ipos > iCount +1))
    {
        cout<<"Invlid position\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount +1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;
        for(int icnt = 1;icnt < ipos -1;icnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE;
        newn -> data = no;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;

        iCount++;
    }
}
void SinglyLL:: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > iCount +1))
    {
        cout<<"Invlid position\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount +1)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;
        for(int icnt = 1;icnt < ipos -1;icnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;
        temp -> next = temp -> nex -> next;
        delete tempX;

        iCount--;
    }
}
int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Marvellous Linkedlist application\n";

    while(1)
    {
        cout<<" ---------------------------------\n";

        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at the given position\n";
        cout<<"4 : Delete node at first position\n";
        cout<<"5 : Delete node at last position\n";
        cout<<"6 : Delete node at given  position\n";
        cout<<"7 : Display the nodes are linkedlist\n";
        cout<<"8 : Count the nodes are linkedlist\n";
        cout<<"9 : Terminated the linkedlist\n";

        cin>>iChoice ;

        switch(iChoice)
        {
            case 1:
                cout<<"Insert node at first position\n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Insert node at last position\n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Insert node from given position\n";
                cin>>iValue;
                cout<<"Enter the position\n";
                cin>>iPosition;

                obj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;
            
            case 6:
                cout<<"Enter the position :\n";
                cin>>iPosition;

                obj.DeleteAtPos(iPosition);
                break;
            
            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"Numbar of elements"<<obj.Count()<<"\n";

            case 9:
                cout<<"Thank you from using this appliction \n";
                return 0;

            default:
                cout<<"Invalic Choice\n";
                break;

        }
    
    }
}