import java.util.*;

class program387
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0,iCol = 0;

        System.out.println("Enter numbar of rows :");
        iRow = sobj.nextInt();

        System.out.println("Enter numbar of columns :");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
        sobj.close();
    }
}
class Matrix
{
    public int Arr[][];

    public Matrix(int i,int j)
    {
        Arr = new int[i][j];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements :");
        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[i] .length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();
    }
    public void Display()
    {
        System.out.println("Enter elements of matrix are :");
        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[i] .length;j++)
            {
                System.out.println(Arr[i][j]+"\t");
            }
        }
    }
}

