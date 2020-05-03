using System;
using System.Collections.Generic;

public class Solution
{
    public int[] TwoSum(int[] nums, int target)
    {
        var dicnums = new Dictionary<int, int>();
        for (int i = 0, j; i < nums.Length; i++)
        {
            if (dicnums.TryGetValue(target - nums[i], out j))
                return new[] { i, j };
            dicnums[nums[i]] = i;
        }
        throw new ArgumentException("No solution found.");
    }
}



namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello x Glenn!");
 
        }
    }
}
