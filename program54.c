#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit = 0;

    while(iNo % 10)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == 8)
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

    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    bRet = CheckDigit(iValue);
    if(bRet == true)
    {
        printf("Digit 8 is presents in numbar\n");
    }
    else
    {
        printf("Digit 8 is not present in numbar\n");

    }

    return 0;


}