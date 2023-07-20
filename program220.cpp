
#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0;

    cout<<"Hexadecimal conversion if : "<<iNo<<" is : "<<"\n";

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        cout<<iDigit;
        iNo = iNo / 16;
    }
    cout<<"\n";
}
int main()
{
    int iValue = 0;

    cout<<"Enter numbar : "<<"\n";
    cin>>iValue;

    DisplayHexadecimal(iValue);

    return 0;
}