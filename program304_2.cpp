#include<iostream>
using namespace std;


template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> *first;
        struct NodeS<T> *last;
        int iCount;

    SinglyCL();
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
SinglyCL <T> ::SinglyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}
template <class T>
void SinglyCL <T>:: Display()
{
    NodeS <T> *temp = first;

    for(int iCnt = 1;iCnt <= iCount;iCnt++)
    {
        cout<<"| "<<temp -> data<<" |->";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}
template <class T>
int SinglyCL <T>:: Count()
{
    return iCount;
}
template <class T>
void SinglyCL <T>:: InsertFirst(T no)
{
    NodeS <T> * newn = new NodeS<T>;

    newn->data = no;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn -> next = first;
        first = newn;
    }
    last -> next = first;
    iCount++;
}
template <class T>
void SinglyCL <T>:: InsertLast(T no)
{
    NodeS<T> *newn = new NodeS<T>;
    newn->data = no;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
       last -> next = newn;
       last = newn;
    }
    last -> next = first;
    iCount++;
}
template <class T>
void SinglyCL <T>:: InsertAtPos(T no,int ipos)
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
        NodeS<T> * temp = first;

        for(int iCnt = 1;iCnt < ipos -1;iCnt++)
        {
            temp = temp -> next;
        }
        NodeS<T> * newn = new NodeS<T>;

        newn -> data = no;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;
        iCount++;
    }   
}
template <class T>
void SinglyCL <T>:: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last -> next;
        last -> next = first;
    }
    iCount--;
}
template <class T>
void SinglyCL <T>:: DeleteLast()
{
     if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        NodeS<T> * temp = first;
        while(temp -> next != last)
        {
            temp = temp -> next;
        }

        delete last;
        last = temp;
        last-> next = first;
    }
    iCount--;
}
template <class T>
void SinglyCL <T>:: DeleteAtPos(int ipos)
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
        NodeS<T> *temp = first;
        NodeS<T> *tempX = NULL;

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
    SinglyCL<int> obj2;

    obj2.InsertFirst(33);
    obj2.InsertFirst(22);
    obj2.InsertFirst(11);
    obj2.InsertLast(44);
    obj2.InsertLast(55);
    obj2.InsertLast(66);

    obj2.Display();
    cout<<"Length of Linked List are "<<obj2.Count()<<"\n";

    obj2.InsertAtPos(99 ,4 );
    obj2.Display();
    cout<<"Length of Linked List are "<<obj2.Count()<<"\n";

    obj2.DeleteAtPos(4);

    obj2.DeleteFirst();
    obj2.DeleteLast();
    obj2.Display();
    cout<<"Length of Linked List are "<<obj2.Count()<<"\n";


    return 0;
}