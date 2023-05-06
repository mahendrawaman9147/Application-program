#include<stdio.h>
#include<stdbool.h>


int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt <= (iNo/2); iCnt++)
    {
        
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}
bool CheckPerfect(int iNumbar)
{
    int iResult = 0;

    iResult = SumFactors(iNumbar);
    if(iResult == iNumbar)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf(" Enter numbar : \n");
    scanf("%d",&iValue);

    bRet= CheckPerfect(iValue);

    printf("Summetion of factor is : %d\n",bRet);

    if(bRet == true)
    {
        printf("%d is perfect numbar\n",iValue);

    }
    else{
        printf("%d is not a perfect numbar\n",iValue);
    }
    return 0;
}