import java.util.*;




class program441
{
    public static void main(String arg[])
    {
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.InsertAtPos(55,4);
        obj.DisplayReverse();

        System.out.println("Numbar of elements are "+obj.Count());

        obj.DeleteAtPos(4);
        obj.DisplayReverse();
        System.out.println("Numbar of elements are "+obj.Count());
        
        obj.DeleteFirst();
        obj.DeleteLast();
        obj.DisplayReverse();

        System.out.println("Numbar of elements are "+obj.Count());

    }
}
class Node
{
    public int data;
    public Node next;
    public Node prev;

    public Node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}
class DoublyLL
{
    public Node first;
    public int iCount;

    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void DisplayReverse()
    {
        System.out.println("Elements of Linked List in reverse order are : :");
        Node temp = first;

        while(temp.next != null)
        {
            temp = temp.next;
        }
        System.out.print("null");

        while(temp != null)
        {
            System.out.println(" | "+temp.data+" | <=> ");
            temp = temp.prev;
        }
        System.out.print("null");
    }
    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
           Node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            
            temp.next = newn;
            newn.prev = temp;
        }
        iCount++;
    }
    public void InsertAtPos(int no,int ipos)
    {
        int iSize = Count();

        if((ipos < 1) || (ipos > iSize +1))
        {
            System.out.println("Invlid Position");
            return;
        }
        if(ipos == 1)
        {
            InsertFirst(no);

        }
        else if(ipos == iSize + 1)
        {
            InsertLast(no);
        }
        else
        {
            Node temp = first;
            for(int iCnt= 1;iCnt < ipos-1;iCnt++)
            {
                temp = temp.next;
            }

            Node newn = new Node(no);

            newn.next = temp.next;
            temp.next.prev = newn;

            temp.next = newn;
            newn.prev = temp;

            iCount++;
        }
    }
    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
            first.prev = null;   
        }
        iCount--;
        
    }
    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        if(first.next == null)
        {
            first = null;
        }
        else
        {
            Node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }
    public void DeleteAtPos(int ipos)
    {
        int iSize = Count();

        if((ipos < 1) || (ipos > iSize))
        {
            System.out.println("Invlid Position");
            return;
        }
        if(ipos == 1)
        {
            DeleteFirst();

        }
        else if(ipos == iSize)
        {
            DeleteLast();
        }
        else
        {
            Node temp = first;
            for(int iCnt= 1;iCnt < ipos-1;iCnt++)
            {
                temp = temp.next;
            }
            
            temp.next = temp.next.next;
            temp.next.prev = temp;
            
            iCount--;
        }
    }

}
