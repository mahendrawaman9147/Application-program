#include<stdio.h>//IO
#include<stdlib.h>       //for memory management


int EvenCounter(int Arr[], int iLength)
{
    //Step 5: Perform the operation on array
    int iCnt = 0;
    int iCounter = 0;
    for(iCnt = 0; iCnt < iLength;iCnt++)
   {
    if((Arr[iCnt] % 2)==0)
    {
        iCounter++;
    }
    
   }
   return iCounter;
   


}
int main()             //Entry point function
{
    int iSize = 0;     //to store size of array
    int *ptr = NULL;   //To store address of array
    int iCnt = 0;      //Loop counter
    int iRet = 0;
    //step 1 : Accept the numbar of elements from user
     printf("Enter numbar of elements : \n");
     scanf("%d",&iSize);

     //step 2 : allocated memory dynamicaly
     ptr = (int *)malloc(iSize * sizeof(int));

     //step 3: Accept the values from user 
     printf("Enter elements : \n");
     for(iCnt = 0;iCnt <= iSize;iCnt++)
     {
        scanf("%d",&ptr[iCnt]);
     }

     printf("Elements of array are : \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
     {
        printf("%d\n",ptr[iCnt]);
     }
    

    //step 4: pass the array to the function
      iRet = EvenCounter(ptr,iSize);
      printf("Enter the counter : %d",iRet);
    
    //step 6 : Dealocate the memory of array
    free(ptr);

    return 0;              //Return succes to OS
}