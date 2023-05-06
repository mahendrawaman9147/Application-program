#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo% 10;
       iCnt++;
        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("Numbar of digit are : %d",iRet);

    return 0;
}