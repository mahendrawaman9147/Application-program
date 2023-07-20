#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
};

ArrayX::ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new int[iSize];
    cout<<"Inside constructor to allocate the memmory \n";
}

ArrayX::~ArrayX()
{
    delete []Arr;
    cout<<"Inside destructor to deallocate the memmory\n";
}

void ArrayX::Accept()
{
    cout<<"Inside Accept method\n";

    cout<<"Enter the eleements : \n";
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void ArrayX::Display()
{
    cout<<"Inside the display method\n";

    cout<<"elements of array are : \n";
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}
int main()
{

    cout<<"Inside main\n";
    int iValue = 0;
    cout<<"Enter the size of array :\n";
    cin>>iValue;

    ArrayX *obj = new ArrayX(iValue);

    obj->Accept();
    obj->Display();

    delete obj;

    cout<<"End of main\n";

    return 0;
}