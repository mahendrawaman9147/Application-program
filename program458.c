#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

   while(iCnt <= iNo)
   {
    printf("*\t");
    iCnt++;
   }
}

int main()
{
    int iValue = 0;
    printf("Enter the numbar of elements : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}