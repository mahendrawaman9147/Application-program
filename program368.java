import java.util.*;

class program367
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");

        str = str.trim();
        System.out.println("Updated string is : "+str);
        sobj.close();
    }
}
