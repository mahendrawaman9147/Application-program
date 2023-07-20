
#include<iostream>
using namespace std;

template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> *first;
        int iCount;

    DoublyLL();
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};


template <class T>
DoublyLL <T> ::DoublyLL()
{
    first = NULL;
    iCount = 0;
}
template <class T>
void DoublyLL <T>:: Display()
{
    NodeD<T>*temp = first;

    for(int iCnt = 1;iCnt <= iCount;iCnt++)
    {
        cout<<"| "<<temp -> data<<" |->";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";        
}
template <class T>
int DoublyLL <T>:: Count()
{
    return iCount;
}
template <class T>
void DoublyLL<T>:: InsertFirst(T no)
{
    NodeD <T>*newn = new NodeD<T>;
    newn -> data = no;
    newn -> next = NULL;

    if(first == NULL)                 //LL is empty
    {
        first = newn;
    }
    else                             //LL contains atleast onne node in it
    {
        first-> prev = newn;      //#
        newn -> next = first;
        first= newn;
    }
    iCount++;
}
template <class T>
void DoublyLL <T>:: InsertLast(T no)
{
    NodeD <T>*newn = new NodeD<T>;
    newn -> data = no;
    newn -> next = NULL;

    NodeD<T> *temp = first;

    if(first == NULL)                 //LL is empty
    {
        first = newn;
    }
    else                             //LL contains atleast onne node in it
    {
       while(temp -> next != NULL)
       {
        temp = temp -> next;
       }
        temp -> next = newn;
        newn -> prev = temp ;      
    }
    iCount++;

}
template <class T>
void DoublyLL <T>:: InsertAtPos(T no,int ipos)
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
        NodeD<T> *newn = new NodeD<T>;

        newn->data = no;
        newn->next = NULL;
        NodeD<T> *temp = first;

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
template <class T>
void DoublyLL <T>:: DeleteFirst()
{
    if(first== NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first= first-> next;
        delete first -> prev;        //#
        first -> prev = NULL;       //#
    }
    iCount--;
}
template <class T>
void DoublyLL <T>:: DeleteLast()
{
     if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
       delete first;
       first = NULL;
    }
    else
    {
        NodeD<T> *temp = first;
        while(first -> next-> next != NULL)     //type 3
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;

}
template <class T>
void DoublyLL <T>:: DeleteAtPos(int ipos)
{
     if((ipos < 1) || (ipos > iCount ))
    {
        printf("Invalid position \n");
        return;
    }

    if(ipos == 1)
    {
       DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        NodeD<T> *temp = first;
        
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
    DoublyLL <int>obj3;

    obj3.InsertFirst(33);
    obj3.InsertFirst(22);
    obj3.InsertFirst(11);
    obj3.InsertLast(44);
    obj3.InsertLast(55);
    obj3.InsertLast(66);

    obj3.Display();
    cout<<"Length of Linkedlist are "<<obj3.Count()<<"\n";

    obj3.InsertAtPos(100,4);
    obj3.Display();
    cout<<"Length of Linkedlist are "<<obj3.Count()<<"\n";

    obj3.DeleteAtPos(4);
    obj3.DeleteFirst();
    //obj3.DeleteLast();
    obj3.Display();
    cout<<"Length of Linkedlist are "<<obj3.Count()<<"\n";

    return 0;
   
}