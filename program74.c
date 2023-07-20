#include<stdio.h>//IO
#include<stdlib.h>//for memory management

int main()           //Entry point function
{
    int iSize = 0;   //to store size of array
    int *ptr = NULL;  //To store address of array
     int iCnt = 0;  //Loop counter

    //step 1 : Accept the numbar of elements from user
     printf("Enter numbar of elements : \n");
     scanf("%d",&iSize);

     //step 2 : allocated memory dynamicaly
     ptr = (int *)malloc(iSize * sizeof(int));

     //step 3: Accept the values from user 
     printf("Enter elements : \n");
     for(iCnt = 0;iCnt < iSize;iCnt++)
     {
        scanf("%d\n",&ptr[iCnt]);
     }

     printf("Elements of array are : \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
     {
        printf("%d",ptr[iCnt]);
     }

    return 0;              //Return succes to OS
}