#include<iostream>
using namespace std;

class Numbar
{
    public:
    int iNo1;
    int iNo2;

   Numbar(int X, int Y)
   {
     iNo1 = X;
     iNo2 = Y;
   }
    int Maximum()
    {
       if(iNo1 > iNo2)
       {
          return iNo1;
       }
       else
       {
          return iNo2;
       }
    }
};
int main()
{
    int iRet = 0;
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter first numbar : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second numbar : "<<"\n";
    cin>>iValue2;

    Numbar nobj1
    (iValue1,iValue2);

    iRet = nobj1.Maximum();

    cout<<"Maximum no is : "<<iRet<<"\n";

    cout<<"Enter first numbar : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second numbar : "<<"\n";
    cin>>iValue2;

    Numbar nobj2(iValue1,iValue2);

    iRet = nobj2.Maximum();

    cout<<"Maximum no is : "<<iRet<<"\n";


    return 0;
}