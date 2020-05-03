using System;
using System.Collections.Generic;

namespace ConsoleApp1321
{
    public class Node
    {
        public int val;
        public Node(int val)
        {
            this.val = val;
        }
        public Node next;
        public Node down;
        public int count = 1;
    }

    public class Skiplist
    {
        Random rng = new Random();
        public int bound {
            get;
        }
        Node root = new Node(int.MinValue);
        public Skiplist()
        {
            bound = 10;
            root.count = 0;
        }

        public bool Search(int target)
        {
            Node node = Search(target, root);
            if (node.val == target && node.count >= 1) return true;
            return false;
        }

        public Node Search(int target, Node node)
        {
            if (node.val == target)
            {
                return node;
            }
            if ((node.next != null && node.next.val > target) || node.next == null)
            {
                if (node.down != null)
                {
                    Node found = Search(target, node.down);
                    if (found.val == node.val)
                    {
                        return node;
                    }
                    else return found;
                }
                else
                {
                    return node;
                }
            }
            return Search(target, node.next);
        }

        public void Add(int num)
        {
            Node found = Search(num, root);
            if (found.val == num)
            {
                while (found != null)
                {
                    found.count ++ ;
                    found = found.down;
                }
                return;
            }

            if (root.next != null)
            {
                Node node = new Node(int.MinValue);
                node.count = root.count;
                node.down = root;
                root = node;
            }

            Add(num, root);

        }
        public Node temp;
        public bool Add(int num, Node node)
        {
            Node p = node;
            while (p.next != null && p.next.val < num)
            {
                p = p.next;
            }
            Node q;
            if (p.down == null)
            {
                q = p.next;
                p.next = new Node(num);
                p.next.next = q;
                temp = p.next;
                return true;
            }

            bool flag = Add(num, p.down);
            if (!flag) return false;
            if (rng.Next(bound) != 0)
            {
                return false;
            }
            q = p.next;
            p.next = new Node(num);
            p.next.next = q;
            p.next.down = temp;
            temp = p.next;
            return true;

        }

        public bool Erase(int num)
        {
            Node found = Search(num, root);
            if (found.val != num) return false;
            if (found.count == 0) return false;
            while (found != null)
            {
                found.count--;
                found = found.down;
            }
            return true;
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Skiplist sl = new Skiplist();
            sl.Add(33);
            sl.Add(33);
            sl.Add(33);
            Console.WriteLine(sl.Erase(33));
            Console.WriteLine(sl.Erase(33));
            Console.WriteLine(sl.bound);
            
        }
    }
}
