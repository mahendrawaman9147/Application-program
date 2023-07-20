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
        String arr[] = str.split(" ");
        System.out.println("Numbar of words are :"+arr.length);

        sobj.close();
    }
}
