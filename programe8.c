//Write a programe which accept the marks and display the class accordingly
// 0 to 34     fail
//35 to 49     pass class
//50 to 59     second class
//60 to 74
//75 to 100
#include<stdio.h>    //for printf and scanf


///////////////////////////////////////////
//Function name : CheckEvenOdd
//Input:Integer
//output : boolean
///Description:Check whether divisible by 3 or 5
//Author:Mahendra Navnath Waman
//date: 25/4/2023
///////////////////////////////////
void DisplayClass(float fMarks)
{
    if ((fMarks< 0.0f) || (fMarks>100.00f))
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between the range 0 to 100\n");
        return;
    }
    if((fMarks>=0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail\n");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You got pass class\n");
    }
    else if((fMarks >= 50.00f)&&(fMarks < 60.00f))
    {
        printf("You got second class\n");
    }
    else if((fMarks >=60.00f)&&(fMarks<75.00f))
    {
        printf("You got first class\n");
    }
    else if((fMarks >=75.00f)&&(fMarks<100.00f))
    {
        printf("You got first class and destintion\n");
    }
}
///////////////////////////////////////////////
//entry point function
///////////////////////////////////
int main()
{
   float fValue = 0.0f;

   printf("Please enter your percentage :\n");
   scanf("%f",&fValue);
   DisplayClass(fValue);

   return 0;


}