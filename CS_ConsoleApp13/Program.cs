using System;
using System.Collections.Generic;

namespace CS_ConsoleApp13
{

    public class Solution
    {

        Dictionary<int, int> map = new Dictionary<int, int>();

        public int KInversePairs(int n, int k)
        {


            if (k == 0) return 1;
            if (k <= 0) return 0;
            if (n == 1) return 0;

            if (map.ContainsKey(n + 1001 * k))
            {
                return map[n + 1001 * k];
            }

            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += KInversePairs(n - 1, k - i);
                sum %= 1000000007;
            }

            map.Add(n + 1001 * k, sum);
            return sum;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.KInversePairs(1000,1000));
        }
    }
}
