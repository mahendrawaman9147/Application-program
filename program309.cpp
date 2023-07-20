#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        struct node *next;

        node( int value)
        {
            data = value;
            next = NULL;
        }

}NODE,*PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Enqueue(int no);   // Insertlast
        int Dequeue();           // DeleteFirst
        void Display();
        int Count();
};

Queue:: Queue()
{
    First = NULL;
    iCount = 0;

}
void Queue:: Enqueue(int no)          // Insertlast
{
    PNODE newn = new NODE(no);

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
int Queue::Dequeue()                    // DeleteFirst
{
    int value = 0;
    if(iCount == 0)
    {
        cout<<"Stack is empty\n";
        return-1;
    }
    else if(iCount == 1)
    {
        value = First -> data;
        delete First;
        First = NULL;
    }
    else
    {
       value = First -> data;
       PNODE temp = First;
       First = First -> next;
       delete temp;
    }
    iCount--;
    return value;
}
void Queue::Display()
{
    if(First == NULL)
    {
        cout<<"Nothing to display the elements\n";
        return;
    }
    cout<<"Elements of queue are :\n";
    PNODE temp = First;
    for(int iCnt = 1;iCnt <= iCount;iCnt++)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
}
int Queue:: Count()
{
    return iCount;
}

int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Stack obj;

    cout<<"_________________________________\n";
    cout<<"Dynamic implemation of queue\n";
    cout<<"_________________________________\n";

    while(iChoice != 0)
    {
        cout<<"_________________________________\n";

        cout<<"1 : insert Elements into queue\n";
        cout<<"2 : remove elements from the queue\n";
        cout<<"3 : Display elements from queue\n";
        cout<<"4 : Count numbar of elements from queue\n";
        cout<<"5 : Terminate the application\n";

        cout<<"_________________________________\n";

        cout<<"Please enter the option :\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the elements that you want to insert\n ";
                cin>>iValue;
                obj.Push(iValue);
                break;
            
            case 2:
                iRet = obj.Pop();
                if(iRet != -1)
                {
                    cout<<"Removed elements from queue is : "<<iRet<<"\n";

                }
                break;

            case 3:
                obj.Display();
                break;

            case 4:
                iRet = obj.Count();
                cout<<"Numbar of elements are : "<<iRet<<"\n";
                break;
            
            case 0:
                cout<<"Thank you for using the application\n";
                break;
            
            default:
                cout<<"Please enter valid option\n";
                break;
        }//End of switch
    }//End of while

    return 0;
}