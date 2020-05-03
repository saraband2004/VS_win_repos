using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;

namespace ConsoleApp38
{

    class Book {
        public string title;
        public int page;
        public Book(string title, int page) {
            this.title = title;
            this.page = page;
        }
    }
    class MyCom : EqualityComparer<Book> {
        public override bool Equals(Book b1, Book b2){
            return b1.title.CompareTo(b2.title) == 0;
        }

        public override int GetHashCode(Book obj)
        {
            return obj.title.GetHashCode();            
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Book b1 = new Book("alpha", 55);
            Book b2 = new Book("alpha", 361);
            HashSet<Book> set = new HashSet<Book>(new MyCom());
            set.Add(b1);
            set.Add(b2);
            Console.WriteLine(set.Count);

            Dictionary<int, int> map = new Dictionary<int, int>();
            map.Add(1, -1);
            //map.Remove();
            map.Add(3, -3);
            Console.WriteLine(map[3]);
        }
    }
}
