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
class DoublyCL
{
    public:
        struct NodeD<T> *first;
        struct NodeD<T> *last;
        int iCount;

    DoublyCL();
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
DoublyCL <T> ::DoublyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}
template <class T>
void DoublyCL <T>:: Display()
{

    NodeD<T> *temp = first;

    for(int iCnt = 1;iCnt <= iCount;iCnt++)
    {
        cout<<"| "<<temp -> data<<" |->";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
    
}
template <class T>
int DoublyCL <T>:: Count()
{
    return iCount;
}
template <class T>
void DoublyCL<T>:: InsertFirst(T no)
{
    NodeD<T> *newn = new NodeD<T>;

    newn -> data = no;
    newn -> next = NULL;

    if(first==NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn -> next = first;
        first -> prev = newn;
        first = newn;
    }
    last -> next = first;
    first ->prev = last;
    iCount++;
}
template <class T>
void DoublyCL <T>:: InsertLast(T no)
{
    NodeD<T> *newn = new NodeD<T>;
     newn -> data = no;
    newn -> next = NULL;
    if(first==NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
       last -> next = newn;
       newn -> prev = last;
       last = last -> next;
    }
    last -> next = first;
    first ->prev = last;
    iCount++;
}
template <class T>
void DoublyCL <T>:: InsertAtPos(T no,int ipos)
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
        NodeD <T> *newn = new NodeD<T>;
         newn -> data = no;
         newn -> next = NULL;

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
void DoublyCL <T>:: DeleteFirst()
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
void DoublyCL <T>:: DeleteLast()
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
        NodeD<T> *temp = first;
        while(first -> next-> next != NULL)     //type 3
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = last -> prev;
    }
    iCount--;
}
template <class T>
void DoublyCL <T>:: DeleteAtPos(int ipos)
{
     if((ipos < 1) || (ipos > iCount))
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
    DoublyCL<int>obj4;

    obj4.InsertFirst(51);
    obj4.InsertFirst(21);
    obj4.InsertFirst(11);

    obj4.InsertLast(101);
    obj4.InsertLast(111);

    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";

    obj4.InsertAtPos(44,4);
    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";

    obj4.DeleteAtPos(4);
    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";

    obj4.DeleteFirst();
    //obj4.DeleteLast();
    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";


    return 0;
}