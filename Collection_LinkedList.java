import java.lang.*;
import java.io.*;
import java.util.*;

class Collection_LinkList
{
    public static void main(String args[]) throws Exception
    {
        //create listlist of strings
        //this simileras template in c++
        LinkedList <String> lobj = new LinkedList<String>();

        // Insert the contents in ArrayList
        lobj.add("First");
        lobj.add("Second");
        lobj.add("Third");
        lobj.add("Fourth");
        lobj.add("Fifth");
         System.out.println("\nContents of array list \n"+ lobj);

         //we can insert data at specified position
         lobj.add(3,"new");

         System.out.println("\nContents of Array List \n"+ lobj);

         //we can insert the data at last
         lobj.add("Two");
         System.out.println("\nContents of Array List \n"+ lobj);

         //we can remove elements from any specified postion
         lobj.remove(3);

         //we can replace the elements from specified position
         lobj.set(3,"New_Data");
         System.out.println("\nContents of Array List \n"+ lobj);

         System.out.println("\n Numbar of elements in Array List are :"+lobj.size());

         System.out.println("\n First occurence of third is :"+lobj.indexOf("Third"));
         System.out.println("\n Last occurence of third is :"+lobj.lastIndexOf("Third"));
         System.out.println("Iterating the array list \n");
         Iterator it = lobj.iterator();
         while(it.hasNext())
         {
            System.out.println(it.next()+ " ");

         }
    }
}