#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        printf("%d\t",iCnt-1);
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