import java.util.*;

class program348
{
    public static void main(String[] args) 
    {
        try (Scanner sobj = new Scanner(System.in)) 
        {
           System.out.println("Enter your name : ");
           String name = sobj.nextLine();

           System.out.println("Your name is :"+name);

           System.out.println("Length of string is :" + name.length());
           sobj.close();
        }   
    }
}
