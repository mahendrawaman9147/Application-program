#include<stdio.h>
#include<stdlib.h>


void Fun(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    for(iCnt = 0;iCnt <= iLength;iCnt++)
    {
        if(Arr[iCnt] < iMax)
        {
            iMax++;
        }
    }

}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter numbar of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Show elements : \n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Fun(ptr,iSize);


    free(ptr);

    return 0;
}