#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
        printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}