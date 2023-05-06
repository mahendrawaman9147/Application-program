#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = iNo;
    while(iCnt >=1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    int iValue= 0;
    printf("Enter numbar : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}