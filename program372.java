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
        
        int iFrequency = 0;
        for(String s : arr)
        {
            if(s.equals("india"))
            {
                iFrequency++;
            }
        }
        System.out.println("Frequency of india word is :"+iFrequency);
        sobj.close();
    }
}

