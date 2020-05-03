using System;
using System.Collections.Generic;

namespace CSharpConsoleApp1
{
    public class Solution
    {
        public int CountElements(int[] arr)
        {
            HashSet<int> set = new HashSet<int>();
            foreach (int _arr in arr) {
                set.Add(_arr);
            }
            int count = 0;
            foreach (int x in arr) {
                if (set.Contains(x + 1)) {
                    count++;
                }
            }

            return count;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }
}
