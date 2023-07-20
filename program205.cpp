#include<iostream>
using namespace std;
class Numbar
{
    public:
      int Maximum(int iNo1,int iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    Numbar nobj;

    cout<<"Enter first numbar : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second numbar : "<<"\n";
    cin>>iValue2;

    iRet = nobj.Maximum(iValue1,iValue2);

    cout<<"Maximum no is : "<<iRet<<"\n";

    return 0;
}