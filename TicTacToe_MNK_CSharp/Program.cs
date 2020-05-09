using System;
using System.Collections.Generic;

namespace TicTacToe_MNK_CSharp
{


    class Program
    {
        static string Array2String<T>(IEnumerable<T> list)
        {
            return "[" + string.Join(",", list) + "]";
        }

        static int fibo(int x) {
            return (x <= 1) ? 1 : fibo(x - 1) + fibo(x - 2);
        }
        static void Main(string[] args)
        {
            Board board = new Board(4, 4, 4 );
            ComputerPlayer cpu1 = new ComputerPlayer('A', 'B', board);
            ComputerPlayer cpu2 = new ComputerPlayer('B', 'A', board);
            board.print();
            cpu1.nextMove();
            cpu2.nextMove();
            board.print();
            Console.WriteLine(cpu1.memo.Count);
           // Console.WriteLine(fibo(45));
        }
    }
}


