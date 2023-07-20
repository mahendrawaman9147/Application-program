import java.util.*;

class program364
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
       

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.toLowerCase();

        str = str.replaceAll("\\","");
        char Arr[] = str.toCharArray();

        int Freq[] = new int[26];

        int iCnt = 0;
        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            Freq[Arr[iCnt] - 'a']++;
        }
        System.out.println("Frequency of each letter is :");
        for(iCnt = 0;iCnt< Freq.length;iCnt++)
        {
            if(Arr[iCnt] != 0)
            {
            System.out.println("Frequence of "+(char)(iCnt+'a') + " is:"+Freq[iCnt]);
            }

        }
          sobj.close();
    }
}
