// write the programe factorial
#include<stdio.h>

void DisplayB(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    DisplayB(iValue);
    return 0;
}