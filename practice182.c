#include<stdio.h>
 
void strcpyX(char * src, char *dest )
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
       *dest = *src;
       src++;
       dest++;
    }
    *dest = '\0';
    
}
int main()
{
    char Arr[20];
    char Brr[20];
   
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("String after copy is : %s\n",Arr);

    

    return 0;
}