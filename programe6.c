//Write a programe which checks weather numbar is even or odd
#include<stdio.h>    //for printf and scanf
#include<stdbool.h>  //for bool data type


///////////////////////////////////////////
//Function name : CheckEvenOdd
//Input:Integer
//output : boolean
///Description:Check whether input is even or odd
//Author:piyush manohar khairnar
//date: 25/4/2023
///////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
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

    printf("Please enter no to check whether it is even or odd :\n");
    scanf("%d",&iValue);
    bRet = CheckEvenOdd(iValue);
    if(bRet==true)
    {
        printf("%d is even numbar\n",iValue);
    }
    else
    {
        printf("%d is odd numbar\n",iValue);
    }
    
    return 0;

}