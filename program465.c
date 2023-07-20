#include<stdio.h>

void DisplayR(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10; DisplayR(iNo);  //Tail recursion
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the numbar : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    
   
    return 0;
}