#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int Size)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0;iCnt< Size;iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}


int main()
{
    int A[] = {10,20,30,40,50};
    int Ret = 0;
    Ret = Maximum(A,5);
    cout<<"maximum is : "<<Ret<<"\n";

    double B[] = {10.55,20.23,30.54,40.88,50.76};
    double dRet = 0.0;
    dRet = Maximum(B,5);
    cout<<"maximum is : "<<dRet<<"\n";
    
    

    

    return 0;
}