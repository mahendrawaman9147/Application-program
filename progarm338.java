import java.util.*;

class program338
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter numbar :");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.SumDigits(iNo);
        System.out.println("Sum of digits is :"+iRet);
        sobj.close();
    }
}
class Digits
{
    int SumDigits(int iValue)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iSum = iSum + iDigit;
            iValue = iValue / 10;

        }
        return iSum;
    }
}