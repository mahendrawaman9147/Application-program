#include<stdio.h>

int SumR(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum +iDigit;
        iNo = iNo / 10;
        SumR( iNo);
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbar : \n");
    scanf("%d",&iValue);

    iRet = SumR(iValue);
    printf("Addition of digit : %d\n",iRet);
    return 0;


    
   
    return 0;
}