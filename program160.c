#include<stdio.h>
#include<string.h>

int strlenDigitsX(char *str)
{
    int iCount =0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        { 
        iCount++;
        
        }
        str++;
    }
    return iCount;
}

int main()
{
   char Arr[10];
   int iRet = 0;

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   iRet = strlenDigitsX(Arr);

   printf("Numbar of Digits are : %d\n",iRet);

    return 0;
}