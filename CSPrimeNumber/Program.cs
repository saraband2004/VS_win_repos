using System;
using System.Data;
using System.Data.SqlClient;

namespace CSPrimeNumber
{



    public class PNT {
        public Boolean IsPrime(int num) {
            if (num == 1) {
                return false;
            }
            if (num == 2 || num == 3) {
                return true;
            }
            SqlConnection sqlCon = new SqlConnection(@"Data Source=(localdb)\MSSQLLocalDB;Initial Catalog=SQLPersonDB;Integrated Security=True;Connect Timeout=99930;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
            int bound = (int)Math.Sqrt(num) + 1;
            SqlDataAdapter sqlda = new SqlDataAdapter($"SELECT * from Person where age <= {bound}", sqlCon);
            DataTable dtbl = new DataTable();
            sqlda.Fill(dtbl);

            foreach (DataRow row in dtbl.Rows)
            {
                if (num%((int)row["AGE"]) == 0){
                    return false;
                }
            }
            sqlCon.Close();
            return true;
        }
        public void insert(int num, int count) {
            SqlConnection sqlCon = new SqlConnection(@"Data Source=(localdb)\MSSQLLocalDB;Initial Catalog=SQLPersonDB;Integrated Security=True;Connect Timeout=99930;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
            string query1 = $"DELETE FROM Person WHERE AGE = {num}";
            SqlCommand cmd1 = new SqlCommand(query1, sqlCon);
            sqlCon.Open();
            cmd1.ExecuteScalar();
            sqlCon.Close();

            sqlCon.Open();
            string query2 = $"insert into Person (PID, AGE, ADDRESS, FULLNAME) values ({count}, {num}, 'Dakota', 'Cooper');";
            SqlCommand cmd2 = new SqlCommand(query2, sqlCon);
            cmd2.ExecuteScalar();
            sqlCon.Close();

        }
    }







    class Program
    {
        static void Main(string[] args)
        {
            int count = 1410649 + 1;
            
            PNT pnt = new PNT();
            for (int num = 22364161 + 1; num < 30000000; num++) {
                if (pnt.IsPrime(num)) {
                    pnt.insert(num, count);
                    count++;
                }            
            }
        }
    }




}
