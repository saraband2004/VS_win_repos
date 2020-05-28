using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Data.Common;
using System.Configuration;
using System.Data.SqlClient;


//using System.Data.CData.MySQL; // Add a reference to your provider and use it



namespace ConsoleAppSQL1234
{
    class Program
    {
        static void Main(string[] args)
        {
            // App.config stores configuration data
            // System.Data.SqlClient provides classes
            // for accessing a SQL Server DB

            // connectionString defines the DB name, and
            // other parameters for connecting to the DB

            // Configurationmanager provides access to
            // config data in App.config
            string provider = ConfigurationManager.AppSettings["provider"];

            string connectionString = ConfigurationManager.AppSettings["connectionString"];
            Console.WriteLine(connectionString);

            // DbProviderFactories generates an 
            // instance of a DbProviderFactory
             
            DbProviderFactory factory = DbProviderFactories.GetFactory(provider);

            // The DBConnection represents the DB connection
            using (DbConnection connection =
                factory.CreateConnection())
            {
                // Check if a connection was made
                if (connection == null)
                {
                    Console.WriteLine("Connection Error");
                    Console.ReadLine();
                    return;
                }

                // The DB data needed to open the correct DB
                connection.ConnectionString = connectionString;

                // Open the DB connection
                connection.Open();

                // Allows you to pass queries to the DB
                DbCommand command = factory.CreateCommand();

                if (command == null)
                {
                    Console.WriteLine("Command Error");
                    Console.ReadLine();
                    return;
                }

                // Set the DB connection for commands
                command.Connection = connection;

                // The query you want to issue
                command.CommandText = "Select * From Products";

                // DbDataReader reads the row results
                // from the query
                using (DbDataReader dataReader = command.ExecuteReader())
                {
                    // Advance to the next results
                    while (dataReader.Read())
                    {
                        // Output results using row names
                        Console.WriteLine($"{dataReader["PID"]} " +
                            $"{dataReader["FULLNAME"]}");
                    }
                }
                Console.ReadLine();
            }
        }
    }
}
