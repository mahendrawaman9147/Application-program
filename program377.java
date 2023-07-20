import java.util.*;

class program377
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\"," ");
        str = str.trim();
        String arr[] = str.split(" ");

        StringBuffer output = new StringBuffer();

        for(String s : arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append((word.reverse()).append(""));
        }
      
        
        System.out.println("Result is:"+output);
        sobj.close();
    }
}
