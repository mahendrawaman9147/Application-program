import java.util.*;

class program352
{
    public static void main(String args[]) 
    {
           Scanner sobj = new Scanner(System.in); 
           System.out.println("Enter your name : ");
           String name = sobj.nextLine();

           StringX obj = new StringX();
            String sret = obj.StrLower(name);
            System.out.println("Converted string is:"+sret);

            sret = obj.StrUpper(name);
            System.out.println("Converted string is:"+sret);

            sret = obj.StrToggle(name);
            System.out.println("Converted string is:"+sret);

            sobj.close();
    }
}
class StringX
{
    public String StrLower(String str) 
    {
        char Arr[]=str.toCharArray();

        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt]>= 'A')&&(Arr[iCnt]<='Z'))
            {
                Arr[iCnt] =(char) (Arr[iCnt] + 32);
            }
        }
        String ret = new String(Arr);

        return ret;
    }
    public String StrUpper(String str)
    {
        char Arr[]=str.toCharArray();

        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt]>= 'a')&&(Arr[iCnt]<='z'))
            {
                Arr[iCnt] =(char) (Arr[iCnt] - 32);
            }
        }
        String ret = new String(Arr);

        return ret;
    }
    public String StrToggle(String str)
    {
        char Arr[]=str.toCharArray();

        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt]>= 'a')&&(Arr[iCnt]<='z'))
            {
                Arr[iCnt] =(char) (Arr[iCnt] - 32);
            }
            else if((Arr[iCnt] >= 'A') && (Arr [iCnt] <= 'Z'))
            {
                Arr[iCnt] =(char) (Arr[iCnt] + 32);
            }
        }
        String ret = new String(Arr);

        return ret;
    }
}


