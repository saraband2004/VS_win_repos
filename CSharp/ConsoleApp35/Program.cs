using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;

namespace ConsoleApp35
{
    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution
    {
        Random rng = new Random();
        ListNode head;
        /** @param head The linked list's head.
            Note that the head is guaranteed to be not null, so it contains at least one node. */
        public Solution(ListNode head)
        {
            this.head = head;
        }

        /** Returns a random node's value. */
        public int GetRandom()
        {
            ListNode p = head;
            int sum = -1;
            int i = 1;
            while (p != null) {
                if (rng.Next(i++) == 0) {
                    sum = p.val;
                }
                p = p.next;
            }
            return sum;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s);

            LinkedList<string> list = new LinkedList<string>();
            list.AddLast("a");
            list.AddLast("bb");
            list.AddLast("ccc");
            list.AddLast("dddd");
            list.AddLast("eeeee");
            Console.WriteLine(list.Count + " " + list.Last.Previous.Value);
        }
    }
}
