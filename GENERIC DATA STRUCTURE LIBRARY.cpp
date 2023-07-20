#include<iostream>
using namespace std;

/////////////////////////////////////////////////////
template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};
///////////////////////////////////////////////////
template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};
////////////////////////////////////////////////////////
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> *first;
        int iCount;

    SinglyLL();
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
SinglyLL <T> ::SinglyLL()
{
    first = NULL;
    iCount = 0;
}
template <class T>
void SinglyLL <T>:: Display()
{
    cout<<"Elements of Singly Linear list are : "<<"\n";

    NodeS <T> *temp = first;

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | -> ";
        temp = temp ->next;
    }
    cout<<"NULL"<<"\n";
}
template <class T>
int SinglyLL <T>:: Count()
{
    return iCount;
}
template <class T>
void SinglyLL <T>:: InsertFirst(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn -> data = no;
    newn -> next = NULL;
    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        newn -> next = first;
        first = newn;
    }
    iCount++;
}
template <class T>
void SinglyLL <T>:: InsertLast(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn -> data = no;
    newn -> next = NULL;
    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        NodeS<T> *temp = first;

        while(temp -> next!= NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL <T>:: DeleteFirst()
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
        NodeS<T> *temp = first;

        first = first -> next;
    }
    iCount--;
}
template <class T>
void SinglyLL <T>:: DeleteLast()
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
        NodeS<T> *temp = first;

       while(temp -> next ->next!= NULL)
       {
        temp = temp -> next;
       }
       delete temp->next;
       temp -> next = NULL;
    }
    iCount--;
}
template <class T>
void SinglyLL <T>:: InsertAtPos(T no,int ipos)
{
    if((ipos< 1) || (ipos > iCount))
    {
        cout<<"Invalid position\n";
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
        NodeS<T> *temp = first;
        int iCnt = 0;
        for(iCnt = 0;iCnt < ipos -1;iCnt++)
        {
            temp = temp-> next;
        }
        NodeS<T> *newn = new NodeS<T>;
        newn -> data = no;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;

        iCount++;
    }

}
template <class T>
void SinglyLL <T>:: DeleteAtPos(int ipos)
{
    if((ipos< 1) || (ipos > iCount))
    {
        cout<<"Invalid position\n";
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

        int iCnt = 0;
        for(iCnt = 0;iCnt < ipos -1;iCnt++)
        {
            temp = temp-> next;
        }
       
      tempX= temp -> next;
      temp ->next = temp -> next -> next;

      delete tempX;

        iCount--;
    }

}


/////////////////////////////////////////////////////////////
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
    cout<<"Elements of Singly Circuler Linked list :"<<"\n";
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
////////////////////////////////////////////////////////
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
    cout<<"Elements of Doubly Linear Linked List : "<<"\n";
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

///////////////////////////////////////////////////////
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
     cout<<"Elements of Doubly Cireculer Linked List : "<<"\n";
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
//////////////////////////////////////////////////////

int main()
{
///////////////////////////////////////////////////////
SinglyLL <int>obj1;

   obj1.InsertFirst(51);
   obj1.InsertFirst(21);
   obj1.InsertFirst(11);

   obj1.InsertLast(101);
   obj1.InsertLast(111);
   
   obj1.InsertAtPos(55,3);

   obj1.Display();
   cout<<"Numbar of elements are : "<<obj1.Count()<<"\n";
   cout<<"Your Method is OK"<<"\n";

   obj1.DeleteAtPos(3);

   obj1.Display();
   cout<<"Numbar of elements are : "<<obj1.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

   obj1.DeleteFirst();
   obj1.DeleteLast();
   obj1.Display();
   cout<<"Numbar of elements are : "<<obj1.Count()<<"\n";
   cout<<"Your Method is OK"<<"\n";
//////////////////////////////////////////////////////////////////////

   SinglyCL<int> obj2;

    obj2.InsertFirst(33);
    obj2.InsertFirst(22);
    obj2.InsertFirst(11);
    obj2.InsertLast(44);
    obj2.InsertLast(55);
    obj2.InsertLast(66);

    obj2.Display();
    cout<<"Length of Linked List are "<<obj2.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

    obj2.InsertAtPos(99 ,4 );
    obj2.Display();
    cout<<"Length of Linked List are "<<obj2.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

    obj2.DeleteAtPos(4);

    obj2.DeleteFirst();
    obj2.DeleteLast();
    obj2.Display();
    cout<<"Length of Linked List are "<<obj2.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

/////////////////////////////////////////////////////////////////////////
    DoublyLL <int>obj3;

    obj3.InsertFirst(33);
    obj3.InsertFirst(22);
    obj3.InsertFirst(11);
    obj3.InsertLast(44);
    obj3.InsertLast(55);
    obj3.InsertLast(66);

    obj3.Display();
    cout<<"Length of Linkedlist are "<<obj3.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

    obj3.InsertAtPos(100,4);
    obj3.Display();
    cout<<"Length of Linkedlist are "<<obj3.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

    obj3.DeleteAtPos(4);
    obj3.DeleteFirst();
    //obj3.DeleteLast();
    obj3.Display();
    cout<<"Length of Linkedlist are "<<obj3.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

/////////////////////////////////////////////////////////////////////////////////
    DoublyCL<int>obj4;

    obj4.InsertFirst(30);
    obj4.InsertFirst(20);
    obj4.InsertFirst(10);

    obj4.InsertLast(40);
    obj4.InsertLast(50);

    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

    obj4.InsertAtPos(44,4);
    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";

    obj4.DeleteAtPos(4);
    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";

    obj4.DeleteFirst();
    //obj4.DeleteLast();
    obj4.Display();
    cout<<"Length of Linked List is :"<<obj4.Count()<<"\n";
    cout<<"Your Method is OK"<<"\n";
 
    return 0;
///////////////////////////////////////////////////////////////////////

}

