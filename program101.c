#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo;iCnt >=1 ;iCnt--)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iFrequrncy = 0;

    printf("Enter the  frequency of symbol : \n");
    scanf("%d",&iFrequrncy);

    Display(iFrequrncy);

    return 0;
}