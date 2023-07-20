import java.util.*;

class program355
{
    public static void main(String arg[]) 
    {
           Scanner sobj = new Scanner(System.in); 

           System.out.println("Enter your name : ");
           String name = sobj.nextLine();

           StringX obj = new StringX();
           String sret = obj.RemoveWhiteSpace(name);

           System.out.println("Result is :"+sret);

           sobj.close();
    }
}
class StringX
{
    public String RemoveWhiteSpace(String str)
    {
        char Arr[] = str.toCharArray();
        String output = "";

        for(int iCnt = 0;iCnt< Arr.length;iCnt++)
        {
            if(Arr[iCnt] != ' ')
            {
               output = output + Arr[iCnt];
            }
        }
        return output;
    }
    
}
