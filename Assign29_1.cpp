#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

UINT CountBit(UINT iNo ,UINT iPos)
{
   UINT iMask = 0X00000001;
   UINT iResult = 0;
   UINT iCnt = 0;


   iResult = iNo & iMask;
   if(iResult == 1)
   {
        iCnt++;
   }
   else
   {
        return 0;
   }
   return iCnt;
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout<<"Enter numbar :"<<"\n";
    cin>>iValue;

    cout<<"Enter position :"<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}

