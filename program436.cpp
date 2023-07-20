#include<iostream>
using namespace std;


template <class T>
struct NodeS
{
    T data;
    struct NoseS *next;
};
template <class T>
struct NodeD
{
    T data;
    struct NoseD *next;
    struct NoseD *prev;
};
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> *head;
        int iCount;


};

template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> *head;
        struct NodeS<T> *tail;
        int iCount;


};

template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> *head;
        int iCount;


};

template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> *head;
        struct NodeD<T> *tail;
        int iCount;

};

// Logic of 32 function

int main()
{
   

    return 0;
}