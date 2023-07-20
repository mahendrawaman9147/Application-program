#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT  iMask = 0X400;
    UINT  iResult = 0;

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
    bool bRet = false;

    cout<<"Enter numbar :"<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"11th bit is ON "<<"\n";
    }
    else
    {
        cout<<"11th bit is OFF"<<"\n";
    }


    return 0;
}