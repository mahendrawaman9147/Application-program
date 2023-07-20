#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    UINT  iResult = 0;
    UINT iMask = 0XFFFFFFBF;

    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    UINT  iValue = 0;
    UINT iRet = 0;

    cout<<"Enter numbar :"<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"result is : "<<iRet<<"\n";
    return 0;
}