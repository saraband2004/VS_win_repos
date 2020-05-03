using System;
using System.Collections.Generic;

namespace ConsoleApp142
{
    public class Solution
    {
        public int Change(int amount, int[] coins)
        {
            Array.Sort(coins);
            Dictionary<int, int> map = new Dictionary<int, int>();
            return Dfs(map, coins, amount, 0);
        }
        public int Dfs(Dictionary<int, int> map, int[] coins, int amount, int index)
        {
            if (amount == 0) return 1;
            if (amount < 0) return 0;
            if (index == coins.Length) return 0;
            if (map.ContainsKey(amount + index * 100000))
            {
                return map[amount + index * 100000];
            }

            int sum = 0;
            sum += Dfs(map, coins, amount, index + 1);
            sum += Dfs(map, coins, amount - coins[index], index);
            map.Add(amount + index * 100000, sum);
            return sum;
        }
        class Program
        {
            static void Main(string[] args)
            {
                Console.WriteLine("Hello World!");
            }
        }
    }
}
