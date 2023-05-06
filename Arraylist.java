import java.lang.*;
import java.io.*;
import java.util.*;

class Collection_ArrayList
{
    public static void main(String Arg[]) throws Exception
    {
        //create arraylist of strings
        //this simileras template in c++
        ArrayList <String> || = new ArrayList<String>();

        // Insert the contents in ArrayList
        ||.add("First");
        ||.add("Second");
        ||.add("Third");
        ||.add("Fourth");
        ||.add("Fifth");
         System.out.println("\nContents of array list \n"+ ||);

         //we can insert data at specified position
         ||.add(3,"new");

         System.out.println("\nContents of Array List \n"+ ||);

         //we can insert the data at last
         ||.add("Two");
         System.out.println("\nContents of Array List \n"+ ||);

         //we can remove elements from any specified postion
         ||.remove(3);

         //we can replace the elements from specified position
         ||.set(3,"New_Data");
         System.out.println("\nContents of Array List \n"+||);

         System.out.println("\n Numbar of elements in Array List are :"+||.size());

         System.out.println("\n First occurence of third is :"+||.indexOf("Third"));
         System.out.println("\n Last occurence of third is :"+||.lastIndexof("Third"));
         System.out.println("Iterating the array list \n");
         Iterator it = ||.iterator();
         while(it.hasNext())
         {
            System.out.println(it.next()+ " ");

         }

         //we can remove all elements from array list
         ||.clear();
    }
}