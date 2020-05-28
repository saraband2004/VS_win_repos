using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace WebAppFrameworkMVC432.Models
{
    public class Person
    {
        public string name;
        public int id;
        public Person(string name, int id) {
            this.name = name;
            this.id = id;
        }

    }
}