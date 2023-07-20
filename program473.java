import java.util.*;


//Doubly circuler linked list 
class program473
{
    public static void main(String ard[])
    {
        DoublyCL obj = new DoublyCL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.InsertAtPos(55,3);

        obj.Display();
        System.out.println("The numbar of nodes are : "+obj.Count());

        obj.DeleteAtPos(3);
        obj.Display();
        System.out.println("The numbar of nodes are : "+obj.Count());

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();
        System.out.println("The numbar of nodes are : "+obj.Count());


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
class DoublyCL
{
    public Node first;
    public Node last;
    public int iCount;

    public DoublyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
         Node temp = first;

        for(int iCnt = 1;iCnt <= iCount;iCnt++)
        {
           System.out.print(" | ->"+temp.data+" | <=>");
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
            first.prev = newn;
            first = newn;
        }
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
           newn.prev = first;
           last = last.next;
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
        if(iCount == 0)
        {
            return;
        }
        if(iCount == 1)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
           last.next = first;
           first.prev = last;
        }
        iCount--;
    }
    public void DeleteLast()
    {
        if(iCount == 0)
        {
            return;
        }
        if(iCount == 1)
        {
            first = null;
            last = null;
        }
        else
        {
           last = last.prev;

           last.next = first;
           first.prev = last;
        }
        iCount--;
    }
    public void DeleteAtPos(int ipos)
    {
         int iSize = Count();

        if((ipos < 1) || (ipos > iSize ))
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