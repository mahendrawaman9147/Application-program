import java.util.*;

class program343
{
   
    public static void main(String[] args) 
    {
        try (Scanner sobj = new Scanner(System.in)) {
            System.out.println("Enter numbar of elements :");
            int iSize = sobj.nextInt();

            int Arr[]=new int [iSize];

            System.out.println("Enter the elements :");

            int iCnt = 0;

            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                Arr[iCnt] = sobj.nextInt();
            }
            System.out.println("Elements of array are :");
            for(iCnt = 0;iCnt< iSize;iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }
            sobj.close();
        }
    }
}