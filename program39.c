// write the programe factorial
#include<stdio.h>


int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <=iNo;iCnt++)
    {
        iFact = iFact * iNo;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is : %d",iRet);

    return 0;
}