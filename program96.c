#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt <= iNo ;iCnt++)
    {
        printf("A\t");
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