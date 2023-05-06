//write the programe to checks whether divisible 5 or 15

#include<stdio.h>
#include<stdbool.h>

bool DivisibleClass(iNo)
{
    if(((iNo % 5)==0) && ((iNo % 15)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the no :\n");
    scanf("%d",&iValue);

    bRet = DivisibleClass(iValue);

    if(bool == true)
    {
        printf("No is divisible by 5 or 15\n");
    }
    else{
        printf("No is not divisible by 5 or 15\n");
    }
    return 0;
}
