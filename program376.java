import java.util.*;

class program376
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringBuffer sbobj = new StringBuffer(str);
        sbobj = sbobj.reverse();
        System.out.println(sbobj);
        
       sobj.close();
    }
}
