#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo, UINT iPos)
{
  UINT iMask = 0X00000040;
  UINT iResult = 0;

  iResult = iNo ^ iMask;

  return iResult;
}
int main()
{
    UINT  iValue = 0;
    UINT iRet = 0;

    cout<<"Enter numbar :"<<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue,iBit);
    cout<<"result is : "<<iRet<<"\n";
    return 0;
}