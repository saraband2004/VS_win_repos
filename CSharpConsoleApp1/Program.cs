using System;
using System.Collections.Generic;

namespace CSharpConsoleApp1
{
    class Solution {
        public int fibo(int x) {
            if (x <= 1) return 1;
            int y = fibo(x - 1);
            y+= fibo(x - 2);
            return y;
        }
    } 
    class Program 
    {
        static void Main(string[] args)
        {
            int y = new Solution().fibo(34);
        }
    }
}
