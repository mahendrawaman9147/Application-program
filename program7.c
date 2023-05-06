//Write a programe which checks weather numbar is dividible by 3 or 5
#include<stdio.h>    //for printf and scanf
#include<stdbool.h>  //for bool data type


///////////////////////////////////////////
//Function name : CheckEvenOdd
//Input:Integer
//output : boolean
///Description:Check whether divisible by 3 or 5
//Author:Mahendra Navnath Waman
//date: 25/4/2023
///////////////////////////////////
bool CheckDivisible(int iNo)
{
    if(((iNo % 3)==0) && ((iNo % 5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////////////////////////////////////////////
//entry point function
///////////////////////////////////
int main()
{
   
    int iValue =0;         ///variable to accept input
    bool bRet = false;    /// variable to accept return value

    printf("Please enter no to check whether Divisible by 3 or 5 :\n");
    scanf("%d",&iValue);
    bRet = CheckDivisible(iValue);
    if(bRet==true)
    {
        printf("%d is Completly  divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not completly divisible by 3 and 5 ",iValue);
    }
    
    return 0;

}