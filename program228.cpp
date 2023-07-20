#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo,UINT iPos)
{
    UINT  iResult = 0;
    UINT iMask = 0X00000001;
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }
    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT  iValue = 0;
    UINT  iBit = 0;
    bool bRet = false;

    cout<<"Enter numbar :"<<"\n";
    cin>>iValue;

    cout<<"Enter bit position(Range should be 1 to 32) :"<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue,iBit);
    if(bRet == true)
    {
        cout<<" bit is ON "<<"\n";
    }
    else
    {
        cout<<" bit is OFF"<<"\n";
    }


    return 0;
}