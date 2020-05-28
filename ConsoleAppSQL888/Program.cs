using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 

namespace ConsoleAppSQL888
{
    class Program
    {
        static void Main(string[] args)
        {

            //Data Source=(localdb)\MSSQLLocalDB;Initial Catalog=SQLPersonDB;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False
            string copied = "SSS";
            Console.WriteLine(copied);
            SqlConnection sqlCon = new SqlConnection(@"Data Source=(localdb)\MSSQLLocalDB;Initial Catalog=SQLPersonDB;Integrated Security=True;Connect Timeout=99930;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");

            //SqlDataAdapter sqlda2 = new SqlDataAdapter("insert into Person (PID, AGE, ADDRESS, FULLNAME) values (324, 36, 'Dakota', 'Cooper');", sqlCon);

            //sqlCon.GetSchema();//("insert into Person (PID, AGE, ADDRESS, FULLNAME) values (324, 36, 'Dakota', 'Cooper');");

            //SqlDataAdapter sqlda = new SqlDataAdapter("Select * from Person where Id = 3", sqlCon);

            string query = "delete from Person where Id = -1";//"CREATE INDEX ageIndex ON Person (AGE)";

            SqlCommand cmd = new SqlCommand(query, sqlCon);
            sqlCon.Open();
            cmd.ExecuteScalar();
            //cmd.EndExecuteReader();

            sqlCon.Close();
            sqlCon.Open();

            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();

            //SqlDataAdapter sqlda = new SqlDataAdapter("SELECT * from Person where AGE = 22350000", sqlCon);
            SqlDataAdapter sqlda = new SqlDataAdapter("SELECT * from Person where AGE = (Select max(AGE) from Person )", sqlCon);
            //SqlDataAdapter sqlda = new SqlDataAdapter("SELECT * from Person where PID = 199999 ", sqlCon);

            
            DataTable dtbl = new DataTable();
            sqlda.Fill(dtbl);

            watch.Stop();
            Console.WriteLine($"Execution Time: {watch.ElapsedMilliseconds} ms");


            Console.WriteLine(dtbl.Rows.Count);
            foreach (DataRow row in dtbl.Rows) {
                Console.WriteLine(row["PID"] +"  "+row["AGE"]  );
            }

        }
    }
}
