import java.util.*;


class program474
{
    public static void main(String arg[])
    {
        SinglyCL obj = new SinglyCL();

        obj.InsertFirst(33);
        obj.InsertFirst(22);
        obj.InsertFirst(11);

        obj.InsertLast(44);
        obj.InsertLast(55);

        obj.Display();
        System.out.println("Elements of linked list are :"+obj.Count());

    }
}
class Node
{
    public int data;
    public Node next;

    public Node(int no)
    {
        this.data = no;
        this.next = null;
    }
}
class SinglyCL
{
    public Node first;
    public Node last;
    public int iCount;

    public SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;

    }

    public void Display()
    {
        System.out.println("Elements of Linked List are :");

        Node temp = first;

        while(temp != null)
        {
            System.out.print(" | "+temp.data+" | ->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        last.next = first;
        iCount++;
    }
    public void InsertLast(int no)
    {
        Node newn = new Node(no);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
           last.next = newn;
           last = newn;
        }
        last.next=first;
        iCount++;
    }

}
