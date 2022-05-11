#include "Board.h"

int main()
{
	Board *board = new Board();

	board->PrintBoard();
	if (board->CekColumn() == true && board->CekRegion() == true && board->CekRow() == true)
	{
		cout << "Game Finished" << endl;
	}
	else
	{
		cout << "Game Over " << endl;
	}

	return 0;
}