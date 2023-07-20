#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1,char *str2)
{
    while(*str1 != '\0') && (*str2 != '\0')
    {
        if(*str1 != *str2)
        {
            break;
        }
    }
    if(*str1 == '\0') && (*str2 == '\0')
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter First string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter String string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = strcmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("string is identical");

    }
    else
    {
        printf("string is different");
    }

    return 0;

}