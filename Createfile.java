
import java.io.*;

class CreateFile
{
    public static void main(String Arg[]) throws Exception
    {
        File fobj = new File("Infosystem.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File succesfully created");
        }
        else
        {
            System.out.println("Unable to create the file");
        }
    }
}