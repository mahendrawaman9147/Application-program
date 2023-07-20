#include<stdio.h>

void DisplayI(int iNo)
{
   int iCnt = 1;

    while(iNo != 0)
    {
        printf("%d\t",iNo%10);
        iNo = iNo / 10;
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the numbar : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    
   
    return 0;
}