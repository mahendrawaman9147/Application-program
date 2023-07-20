#include<iostream>
using namespace std;

class Pattern
{
{
    public:
    int iRaw;
    int iCol;

    Pattern(int X, int Y)
    {
        iRaw = X;
        iCol = Y;
    }
}  
void Display()
{
    int i = 0;
    int j = 0;

    for(i = 1;i<= iRaw;i++)
    {
        for(j = 1; j<= iCol;j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}
}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter numbar of rows : "<<"\n";
    cin>>iNo1;

    cout<<"Enter numbar of rows : "<<"\n";
    cin>>iNo1;
    Pattern pobj(iNo1,iNo2);

    pobj.Display();
    
    return 0;
}