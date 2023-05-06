
import java.io.*;

class WriteFile
{
    public static void main(String Arg[]) throws Exception
    {
       FileOutputStream fobj = new FileOutputStream("Infosystem.txt");
       String str = "India is my country";

       byte Arr[] = str.getBytes();
       fobj.write(Arr);
       fobj.close();
    }
}