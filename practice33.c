#include<stdio.h>

unsigned long int CalculatePower(int iBase,int iPower)
{
    int iCnt = 0;
    unsigned long int iResult = 0;

    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }
    for(iCnt  = 1; iCnt<= iPower;iCnt++)
    {
        iResult= iResult * iBase;
    }
    return iResult;
}
int main()
{
    int iValue1=0,int iValue2= 0;
    unsigned long int iRet = 0;

    printf("Enter numbar\n");
    scanf("%d",&iValue1);

    printf("Enter Numbar\n");
    scanf("%d",iValue2);

    iRet = CalculatePower(iValue1,iValue2);

    printf("Resutl is %d\n",iRet);

    return 0;
}