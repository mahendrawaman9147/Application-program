#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}
int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charactor : \n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such charactor\n");
    }
    else
    {
        printf("First occurance of that charactor is at : %d\n",iRet);

    }
    
    return 0;
}