//Write a programe which accept numbar from user and display its multiplication if factor
#include<stdio.h>


int MultFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt <= (iNo/2); iCnt++)
    {
        
        if((iNo % iCnt)==0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf(" Enter numbar : \n");
    scanf("%d",&iValue);

    iRet= MultFactors(iValue);

    printf("Multiplication of factor is : %d\n",iRet);
    return 0;
}