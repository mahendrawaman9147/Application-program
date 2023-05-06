import java.lang.*;
import java.io.*;
import java.util.*;

class Collection_ArrayList
{
    public static void main(String args[]) throws Exception
    {
        //create arraylist of strings
        //this simileras template in c++
        ArrayList <String> aobj = new ArrayList<String>();

        // Insert the contents in ArrayList
        aobj.add("First");
        aobj.add("Second");
        aobj.add("Third");
        aobj.add("Fourth");
        aobj.add("Fifth");
         System.out.println("\nContents of array list \n"+ aobj);

         //we can insert data at specified position
         aobj.add(3,"new");

         System.out.println("\nContents of Array List \n"+ aobj);

         //we can insert the data at last
         aobj.add("Two");
         System.out.println("\nContents of Array List \n"+ aobj);

         //we can remove elements from any specified postion
         aobj.remove(3);

         //we can replace the elements from specified position
         aobj.set(3,"New_Data");
         System.out.println("\nContents of Array List \n"+ aobj);

         System.out.println("\n Numbar of elements in Array List are :"+aobj.size());

         System.out.println("\n First occurence of third is :"+aobj.indexOf("Third"));
         System.out.println("\n Last occurence of third is :"+aobj.lastIndexOf("Third"));
         System.out.println("Iterating the array list \n");
         Iterator it = aobj.iterator();
         while(it.hasNext())
         {
            System.out.println(it.next()+ " ");

         }

         //we can remove all elements from array list
         aobj.clear();
    }
}