// write the programe factorial
#include<stdio.h>

typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
    ULONG iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >=1;iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    ULONG iRet = 0;
    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is : %d\n",iRet);

    return 0;
}