 #include<stdio.h>

void Display(int iRow,int iCol)
{
    int j = 0;
    int i = 0;
     if(iRow != iCol)
     {
        printf("Invalid numbar");
        return;
     }
    for(i = 1;i <=iRow;i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            if(i == j)///Diagonal
            {
                printf("*\t");
            }
            else if(i<j)  //upper triangle
            {
                printf("@\t");
               
            }
            else if(i>j)  //lower triangle
            {
                printf("$\t");
            }
           
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