#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1
int SearchFirstOccurance(int Arr[],int iLength,int iNo);
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;
    for(iCnt = 0;iCnt< iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
        }
    }
    return iPos;
}
int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbar of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements are : \n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the elements that you want to search : \n");
    scanf("%d",&iValue);

    printf("Display elelments : \n");
    for(iCnt = 0;iCnt< iSize;iCnt++)
    {
        printf("%d",ptr[iCnt]);
    }

    iRet = SearchFirstOccurance(ptr,iSize,iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such elements : \n");
    }
    else
    {
        printf("%d occured at index %d\n ",iValue,iRet);
    }

    free(ptr);

    return 0;
}
