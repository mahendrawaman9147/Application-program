#include<stdio.h>

void Display(int iRow,int iCol)
{
    int j = 0;
    int i = 0;
    char ch = '\0';
    for(i = 1,ch = 'a';i <=iRow;i++,ch++)
    {
        for(j = 1;j<=iCol;j++)
        {
            printf("%c\t",ch);
           
        }
        printf("\n");
    }

   
}
int main()
{
   int iValue1 = 0;
   int iValue2 =0;

   printf("Enter Numbar of Rows :");
   scanf("%d",&iValue1);

    printf("Enter numbar of column :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}