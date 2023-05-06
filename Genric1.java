

class Genric1
{
    public static void Display(Integer Arr[])
    {
        for(int no : Arr)
        {
            System.out.println(no);
        }
    }
    public static void main(String Arg[])
    {
        Integer A[] = {10,20,30,40};
        Integer B[] = {50,60,70};

        Display(A);
        Display(B);

    }
}