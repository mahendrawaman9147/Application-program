#include "programe5header.h"

/// Entry point function

#include "programe5header.h"


int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first numbar :\n ");
    scanf("%d",&iNo1);

    printf("Enter second numbar : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is : %d\n",iAns);

    return 0;
}
