using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace WebAppFramework12.Models
{
    public class Person
    {
        public string name = "";
        public int id = 3;
        public Person() { 
        }
        public List<string> list = new List<string>();
        public Person(string str, int id) {
            this.name = str;
            this.id = id;
        }
    }
}