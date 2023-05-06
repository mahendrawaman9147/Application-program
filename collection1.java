
import java.util.*;
class Collection2
{
    public static void main(String Arg[])
{
    Stack <Integer> lobj = new Stack<Integer>();
    lobj.push(11);
    lobj.push(21);
    lobj.push(51);
    lobj.push(101);

    System.out.println("Elements are : "+lobj);

    System.out.println("Poped element is : "+lobj.pop());
    System.out.println("Elements are : "+lobj);

}

}