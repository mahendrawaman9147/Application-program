#include<stdio.h>
#include<stdbool.h>

bool stricmpX(char *str1, char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)                      //letters are differance
        {
             if((*str1 >= 'a') && (*str1 <= 'z')) //first letter is small
            {
                if(*str1 != (*str2 + 32))
                {
                    break;
                }
            }
            else if((*str1 >= 'A') && (*str1 <= 'Z')) //first letter is capital
            {
                if(*str1 != (*str2 - 32))
                {
                    break;
                }
                
            }
            else       //Special symbol
            {
                break;
            }
        }
        str1++;
        str2++;
        
    }
    
    if((*str1 == '\0') && (*str2 == '\0'))
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

    printf("Enter first string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : \n");
    scanf(" %[^'\n']s",Brr);

    bRet = stricmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("Both the strings are identicals\n");
    }
    else
    {
        printf("both the string are different\n");
    }
    return 0;
}