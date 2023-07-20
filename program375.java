import java.util.*;

class program375
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        
        str = str.replaceAll("\\s+"," ");
        str = str.trim();
        
        String arr[] = str.split(" ");
        
        int iMax = 0;
        int iPos = 0;

        for(int iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if(arr[iCnt].length() > iMax)
            {
                iMax = arr[iCnt].length();
                iPos = iCnt;
            }
        }
        System.out.println("Largest word is :"+arr[iPos]+"with lenght :"+iMax);
        sobj.close();
    }
}

