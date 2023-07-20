#include<stdio.h>
//Travell till end of dest
//copy the data from src to dest
//write '\0' at the emd dest

void strncatX(char *src, char *dest,int iLength)
{
   //Travell till end of dest
   while(*dest != '\0')
   {
        dest++;
   }
   
   //copy the data from src to dest
   while(*src != '\0') 
   {
        *dest = *src;
        dest++;
        src++;
        iLength--;
        if(iLength == 0)
        {
            break;
        }
   }

   //write '\0' at the emd dest
    *dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the numbar of latter that you want : \n");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);

    printf("String after concatnation is :%s\n",Brr);

    return 0;
}