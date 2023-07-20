
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0,iCnt = 0;
    int iSmall = 0;
    int iCap = 0;
    int iDigit = 0,iVowelSmall = 0, iVowelCap = 0;

    printf("Enter the file that you want to Open\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    while(1)
    {
        iRet = read(fd,Arr,sizeof(Arr));   //10
        if(iRet == 0)
        {
            break;
        }
    //Loop
        for(iCnt = 0;iCnt < iRet;iCnt++ )
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iSmall++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCap++;
            }
            else if((Arr[iCnt] >= '0') && (Arr[iCnt] <= '9'))
            {
                iDigit++;
            }
             else if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O')||(Arr[iCnt] == 'U'))
            {
                iVowelCap++;
            }
             else if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o')||(Arr[iCnt] == 'u'))
            {
                iVowelSmall++;
            }
        }
    }
   
    printf("Numbar of small case letters are :%d\n",iSmall);
    printf("Numbar of Capital case letters are :%d\n",iCap);
    printf("Numbar of Digits are :%d\n",iDigit);
    printf("Numbar of small vowel  are :%d\n",iVowelSmall);
    printf("Numbar of capital vowel  are :%d\n",iVowelCap);


    close(fd);
    return 0;
}