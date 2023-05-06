import java.lang.*;
import java.io.*;
import java.util.*;

class Collection_Vector
{
    public static void main(String args[]) throws Exception
    {
        //create Vector of integer
        //this simileras template in c++
        //in this case vector if size 10 gets created
         Vector<Integer> vobj = new Vector<Integer>();

         //we can create vector as in which size of vector is 50
        Vector<Integer> v1 = new Vector<Integer>(50);
       
        //we can create vector as in which size of vector is 50
        //when vector becomes full its size gets increamented by 10
         Vector<Integer> v2 = new Vector<Integer>(50,10);

        // Insert the contents in ArrayList
        vobj.add(10);
        vobj.add(20);
        vobj.add(30);
        vobj.add(40);
        vobj.add(50);
         System.out.println("\nContents of vector \n"+ vobj);

         //we can insert data at specified position
         vobj.add(3,11);

         System.out.println("\nContents of vector \n"+ vobj);

         //we can remove elements from any specified postion
         vobj.remove(3);

         //we can replace the elements from specified position
         vobj.set(3,21);
         System.out.println("\nContents of vector \n"+ vobj);

         System.out.println("\n Numbar of elements in vector are :"+vobj.size());

         System.out.println("\n First occurence of third is :"+vobj.indexOf(21));
         System.out.println("\n Last occurence of third is :"+vobj.lastIndexOf(21));
         System.out.println("Iterating the vector \n");
         Iterator it = vobj.iterator();
         while(it.hasNext())
         {
            System.out.println(it.next()+ " ");

         }

         //we can remove all elements from array list
         vobj.clear();
    }
}