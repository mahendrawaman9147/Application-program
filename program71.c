
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the numbar of elements :\n");
    scanf("%d",&iSize);


    ptr = (int *)malloc(iSize*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocated memory\n");
        return -1;
    }
    printf("Memory allocted succesfully...\n");



    return 0;
}