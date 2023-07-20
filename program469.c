#include<stdio.h>

void FactorsI(int iNo)
{
   int iCnt = 2;
   while(iCnt <= iNo / 2)
   {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
   }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbar : \n");
    scanf("%d",&iValue);

    FactorsI(iValue);
    
    return 0;
}