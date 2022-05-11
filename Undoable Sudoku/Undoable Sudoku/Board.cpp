#include "Board.h"

Board::Board()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			board[i][j] = 0;
		}
	}
}

void Board::GenerateNumber()
{

}

void Board::PrintBoard()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] == 0)
			{
				cout << " ";
			}
			else
			{
				cout << board[i][j];
				cout << " ";
			}

			if ((j + 1) % 3 == 0)
			{
				if (j != 8)
					cout << " | ";
			}
		}
		cout << endl;

		if ((i + 1) % 3 == 0)
		{
			cout << "-----------------------" << endl;
		}
	}
}

bool Board::CekRegion()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{

		}
	}

	// correct number
	return true;
}

bool Board::CekRow()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if (k < 8)
				{
					k = 0;
					if (board[i][j] == board[i][k])
					{
						return false;
					}
				}
				else
				{
					if (board[i][j] == board[i][k])
					{
						return false;
					}
				}
			}
		}
	}

	// correct number
	return true;
}

bool Board::CekColumn()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if (k < 8)
				{
					k = 0;
					if (board[j][i] == board[k][j])
					{
						return false;
					}
				}
				else
				{
					if (board[j][i] == board[k][j])
					{
						return false;
					}
				}
			}
		}
	}

	// correct number
	return true;
}

void Board::Delete(int x, int y)
{
	board[x][y] = 0;
}


void Board::Fill(int x, int y, int value)
{
	board[x][y] = value;
}

