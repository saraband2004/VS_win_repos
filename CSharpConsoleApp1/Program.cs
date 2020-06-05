
using ClassLibrary;
using System;
using System.Collections.Generic;

namespace CSharpConsoleApp1
{
    public class Solution {
        public int fibo(int x) {
            if (x <= 1) return 1;
            int y = fibo(x - 1);
            y+= fibo(x - 2);
            return y;
        }

        public void func(int[] arr, int index) {
            int y = arr[index];
        }
    } 
    class Program 
    {
        static void Main(string[] args)
        {
            new Solution().func(new int[42], 41);
             Tom t = new ClassLibrary.Tom();
        }
    }
}
