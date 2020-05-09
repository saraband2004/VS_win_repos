using System;
using System.Collections.Generic;
using System.Text;

namespace TicTacToe_MNK_CSharp
{
 
	class Board
	{
		public int M;
		public int N;
		public int K;
		char[][] brd;
		public Board(int M, int N, int K)
		{
			this.M = M;
			this.N = N;
			this.K = K;
			brd = new char[M][];
			for (int i = 0; i < M; i++)
			{
				brd[i] = new char[N];
				for (int j = 0; j < N; j++)
				{
					brd[i][j] = 'e';
				}
			}
		}

		public void print()
		{
			foreach (char[] line in brd)
			{
				foreach (char c in line) {
					Console.Write(c);
				}
				Console.Write("\n");
			}
			Console.WriteLine("-------------------");
		}
		public bool isAvailable(int x, int y)
		{
			if (brd[x][y] != 'e')
			{
				return false;
			}
			return true;
		}
		public bool put(int x, int y, char p)
		{
			brd[x][y] = p;
			return true;
		}

		int[][][] dirs = new int[][][]{new int[][]{ new int[]{ 1,0}, new int[] { -1,0}},
					  new int[][]{ new int[] { 0,1}, new int[] { 0,-1}},
					  new int[][]{ new int[] { 1,1}, new int[] { -1,-1}},
					  new int[][]{ new int[] {-1,1}, new int[] { 1,-1}}};

		public bool win(int x, int y, char p)
		{
			if (brd[x][y] != 'e')
			{
				return false;
			}
			int i, j;
			int count = 0;
			foreach (int[][] dir in dirs)
			{
				count = 1;
				foreach (int[] di in dir)
				{
					i = x + di[0];
					j = y + di[1];
					while (i >= 0 && j >= 0 && i < M && j < N)
					{
						if (brd[i][j] == p)
						{
							count++;
						}
						else break;
						i += di[0];
						j += di[1];
					}
				}
				if (count >= K)
				{
					//System.out.println(p + " wins!!!\n");
					return true;
				}
			}
			return false;
		}
		public String serialize()
		{
			String res = "";
			foreach (char[] line in brd)
			{
				res = res + new String(line);
			}
			return res;
		}
	}

}
