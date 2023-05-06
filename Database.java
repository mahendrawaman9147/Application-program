import java.sql.*;           //1

class Database
{
    public static void main(String Arg[]) throws Exception
    {
        
        String URL = "jdbc:mysql://localhost:3306/ppa50";
        String Username = "root";
        String Password = "root";
        String Query = "select *from student";
        
        Connection cobj = DriverManager.getConnection(URL,Username,Password);  //2
    
        Statement sobj = cobj.createStatement();               //3

        ResultSet robj = sobj.executeQuery(Query);            //4
       
        while(robj.next())                                   //5
        {
            System.out.println("RID : "+robj.getInt("rno"));
            System.out.println("Name : "+robj.getString("name"));
            System.out.println("City : "+robj.getString("city"));
            System.out.println("Marks : "+robj.getInt("marks"));
        }
    }
}