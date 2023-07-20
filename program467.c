#include<stdio.h>

int SumI(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum +iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbar : \n");
    scanf("%d",&iValue);

    iRet = SumI(iValue);
    printf("Addition of digit L %d\n",iRet);
    return 0;


    
   
    return 0;
}