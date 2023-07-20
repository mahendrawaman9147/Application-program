#include<stdio.h>
//Travell till end of dest
//copy the data from src to dest
//write '\0' at the emd dest

void strcatX(char *src, char *dest)
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
   }

   //write '\0' at the emd dest
*dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    strcatX(Arr,Brr);

    printf("String after copy is :%s\n",Brr);

    return 0;
}