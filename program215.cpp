#include<iostream>
using namespace std;

class Digit
{
    public:
    int iNo;

    Digit(int X)
    {
        iNo = X;
    }

    int SumDigit()
    {
        int iDigit = 0;
        int iSum = 0;
        int iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        return iSum;
    }


};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Numbar :"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.SumDigit();

    cout<<"Summation of digit :"<<iRet<<"\n";

    return 0;
}