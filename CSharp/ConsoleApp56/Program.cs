using System;
using System.Collections.Generic;

namespace ConsoleApp56
{
    abstract class Parent {
        public abstract void Print();
    }
    class Child: Parent
    {
        public override void Print()
        {
            Console.WriteLine("child");
        }
    }
    class Program
    {
 
 
        static void Main(string[] args)
        {
            Child c = new Child();
            c.Print();
        }
    }
}
