using System;

namespace OOP_001
{
    class Ancestor {
        public void Method() {
            Console.WriteLine("ancestor");
        }
    }
    class GrandFather : Ancestor{
        public new void Method()
        {
            Console.WriteLine("grandfather");
        }
    }
    class Father : GrandFather{
        public new void Method()
        {
            Console.WriteLine("father");
        }
    }
    class Son : Father{
        public new void Method()
        {
            Console.WriteLine("son");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Ancestor a = new Ancestor();
            GrandFather g = new GrandFather();
            Father f = new Father();
            Son s = new Son();

            a.Method();
            g.Method();
            f.Method();
            s.Method();

            a = new GrandFather();
            a.Method();
            g = new Father();
            g.Method();
        }
    }
}
