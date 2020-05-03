using Magnum.Collections;
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;

namespace ConsoleApp3341
{

    class MyCom : EqualityComparer<string[]>
    {
        public override bool Equals([AllowNull] string[] x, [AllowNull] string[] y)
        {
            if (x.Length != y.Length) return false;
            for (int i = 0; i < x.Length; i++) {
                if (x[i] != y[i]) return false;
            }
            return true;
        }

        public override int GetHashCode([DisallowNull] string[] obj)
        {
            int sum = 0; int i = 0;
            foreach (string str in obj) {
                sum += str.GetHashCode() * (i ++ ); 
            }
            return sum;
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            HashSet<string[]> set = new HashSet<string[]>(new MyCom());
            string[] list1 = new string[] { "a", "bb" };
            string[] list2 = new string[] { "a", "bb" };

            set.Add(list1);
            set.Add(list2);

            Console.WriteLine(set.Count);


            OrderedBag<int> bag = new OrderedBag<int>((int a , int b)=> b-a);
            bag.Add(3);
            bag.Add(1);
            bag.Add(2);
            bag.Add(2);
            bag.Add(9);
            Console.WriteLine(bag.GetFirst());
            Console.WriteLine(bag.Count);
        }
    }
}
