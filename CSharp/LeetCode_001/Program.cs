using System;
using System.Collections.Generic;

namespace LeetCode_001
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Dictionary<int, int> dict = new Dictionary<int, int>();
            dict.Add(100, -100);
            Console.WriteLine(dict.Count + " " + dict[100]);
            //dict.Add(100, -100);
            //dict.TryAdd(100, -200);
            bool flag = true;
            Console.WriteLine(dict.Count + " " + dict[100] + !flag);
            Console.WriteLine(dict.Count + " " + dict.ContainsKey(100));
        }
    }
}
