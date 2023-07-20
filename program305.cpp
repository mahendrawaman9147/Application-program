#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;

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

void DoublyCL:: InsertFirst()
int main()
{


    return 0;
}