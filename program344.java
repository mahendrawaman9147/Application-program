import java.util.*;

class program344
{
   
    
    public static void main(String[] args) 
    {
        try (Scanner sobj = new Scanner(System.in)) 
        {
            System.out.println("Enter numbar of elements :");
            int iSize = sobj.nextInt();

            ArrayX aobj = new ArrayX(iSize);
            aobj.Accept();
            aobj.Display();

            sobj.close();
        }
        
    }

}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int [iSize];
    }
    public void Accept()
    {
        try (Scanner sobj = new Scanner(System.in))
        {
            for(int iCnt = 0;iCnt <Arr.length;iCnt++)
            {
                Arr[iCnt] = sobj.nextInt();
            }
        }

    }
    
    public void Display()
    {
        System.out.println("elements of array are :");
        {
            for(int iCnt = 0;iCnt <Arr.length;iCnt++)
            {
                System.out.println(Arr[iCnt]+"\t");
            }
            System.out.println();
        }
    }
}

