#include<stdio.h>


void Frequency(char *str, char cValue)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;
    int iPos = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }
    printf("Small case Charactor count : %d\n",iSmallCnt);
    printf("Capital case Charactor count : %d\n",iCapCnt);
}
int main()
{
    char Arr[20];
    char ch = '\0';

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);


    Frequency(Arr,ch);

    

    return 0;
}