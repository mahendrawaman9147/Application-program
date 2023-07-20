#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
   
    //      1          2        3
    for(iCnt = -iNo;iCnt <0 ;iCnt++)
    {
         printf("%d\t",iCnt);  //4
    }
    for(iCnt = 0;iCnt <= iNo;iCnt++)
    {
         printf("%d\t",iCnt);
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