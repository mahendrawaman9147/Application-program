#include<iostream>
using namespace std;

class Numbar
{
    public:
    int iNo1;
    int iNo2;

    void Accept()
    {
       cout<<"Enter first numbar : "<<"\n";
       cin>>iNo1; 

        cout<<"Enter second numbar : "<<"\n";
        cin>>iNo2;

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
    Numbar nobj;

    nobj.Accept();

    iRet = nobj.Maximum();

    cout<<"Maximum no is : "<<iRet<<"\n";

    return 0;
}