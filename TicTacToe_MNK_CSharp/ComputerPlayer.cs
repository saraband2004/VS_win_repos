using System;
using System.Collections.Generic;
using System.Text;

namespace TicTacToe_MNK_CSharp
{
	enum Game
	{
		WIN, LOSS, DRAW
	}


	class ComputerPlayer
	{
		int M, N, K;
		char p;
		char q;
		Board board;
		public ComputerPlayer(char p, char q, Board board)
		{
			this.board = board;
			this.M = board.M;
			this.N = board.N;
			this.K = board.K;
			this.p = p;
			this.q = q;			
		}
		public Dictionary<string, Game> memo = new Dictionary<string, Game>();
		public void nextMove()
		{
			LinkedList<int[]> drawList = new LinkedList<int[]>();
			bool full = true;
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < N; j++)
				{

					if (board.isAvailable(i, j))
					{
						full = false;
						if (board.win(i, j, p))
						{
							Console.WriteLine("CPU " + p + " wins");
							board.put(i, j, p);
							return;
						}

						Game res = dfs(i, j, p, q);
						if (res == Game.WIN)
						{
							Console.WriteLine("CPU " + p + " will win");
							board.put(i, j, p);
							return;
						}
						else if (res == Game.LOSS)
						{
							drawList.AddLast(new int[] { i, j });
						}
						else
						{
							drawList.AddFirst(new int[] { i, j });
						}
					}
				}
			}
			if (full)
			{
				Console.WriteLine("Draw!");
				return;
			}
			board.put(drawList.First.Value[0], drawList.First.Value[1], p);
		}
		public Game dfs(int x, int y, char p, char q)
		{
			if (board.win(x, y, p))
			{
				return Game.WIN;
			}
			board.put(x, y, p);

			String str = board.serialize();
			if (memo.ContainsKey(str))
			{
				board.put(x, y, 'e');
				return memo[str];
			}

			bool win = true;
			bool full = true;
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if (board.isAvailable(i, j))
					{
						full = false;
						Game res = dfs(i, j, q, p);
						if (res == Game.WIN)
						{
							board.put(x, y, 'e');
							memo.Add(str, Game.LOSS);
							return Game.LOSS;
						}
						else if (res == Game.DRAW)
						{
							win = false;
						}
					}
				}
			}
			board.put(x, y, 'e');

			if (full || !win)
			{
				//System.out.println("draw");
				memo.Add(str, Game.DRAW);
				return Game.DRAW;
			}
			memo.Add(str, Game.WIN);
			return Game.WIN;
		}
	}
}
