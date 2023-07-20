#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        struct node *next;
        struct node *prev;

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

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int no, int ipos);

        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int ipos);

        void Display();
        int Count();  
};

DoublyCL:: DoublyCL()
{

}
DoublyCL:: ~DoublyCL()
{

}
void DoublyCL::InsertFirst(int ino)
{

}
void DoublyCL::InsertLast(int ino)
{

}
void DoublyCL::InsertAtPos(int no, int ipos)
{

}

void DoublyCL::deleteFirst()
{

}
void DoublyCL::deleteLast()
{

}
void DoublyCL::deleteAtPos(int ipos)
{

}

void DoublyCL::Display()
{

}
int DoublyCL::Count()
{
    return 0;
}
int main()
{


    return 0;
}