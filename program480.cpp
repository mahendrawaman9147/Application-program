#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;
        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T);
        bool BidirectionalSearch(T);
        bool BinarySearch(T);
        bool CheckSorted();
};
template<class T>
ArrayX <T>::ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[iSize];
}
template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}
template<class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the eleements : \n";
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
template<class T>
void ArrayX<T>::Display()
{
    cout<<"elements of array are : \n";
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template<class T>
bool ArrayX<T> :: CheckSorted()
{
    int iCnt = 0;
    bool flag = true;

    for(iCnt = 0;iCnt< iSize-1;iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt+1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{

    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of array :\n";
    cin>>iValue;

    ArrayX<int> *obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->Display();

    bRet = obj->CheckSorted();
    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }

    return 0;
}