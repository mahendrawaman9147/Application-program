#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OffBit(UINT iNo, UINT iPos)
{
    UINT  iResult = 0;
    UINT iMask = 0X00000001;

    iMask = iMask << (iPos -1);
    iMask = ~iMask;

    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    UINT  iValue = 0;
    UINT  iBit = 0;
   UINT iRet = 0;

    cout<<"Enter numbar :"<<"\n";
    cin>>iValue;

    cout<<"Enter position : "<<"\n";
    cin >>iBit;

    iRet = OffBit(iValue,iBit);
    cout<<"result is : "<<iRet<<"\n";
    return 0;
}