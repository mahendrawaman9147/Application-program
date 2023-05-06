
import java.util.*;
class Collection2
{
    public static void main(String Arg[])
{
    Hashtable <String,Integer> hobj = new Hashtable<String,Integer>();

    hobj.put("C programing",990);
    hobj.put("C++ programing",1200);
    hobj.put("Java programing",780);
    hobj.put("Pythn programing",1650);
        
        System.out.println("Book price of java"+hobj.get("Java programing"));
        hobj.remove("C++ programing");

        Enumeration eobj = hobj.keys();
        while(eobj.hasMoreElements());
        {
            System.out.println(eobj.nextElement());
        }
}

}