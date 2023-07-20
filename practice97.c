//accept the numbar and display # on screen

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iFrequrncy = 0;
    
    printf("Enter Frequency :");
    scanf("%d",&iFrequrncy);

    Display(iFrequrncy);

    return 0;

}