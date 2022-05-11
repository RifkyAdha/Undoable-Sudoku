#include "GameManager.h"

GameManager::GameManager()
{
	board = new Board();
	player = new Player();
}

void GameManager::Initialize()
{
	board->GenerateNumber();
	board->PrintBoard();
}

int GameManager::Pause()
{
	int answer;
	cout << "Game paused" << endl;
	cout << "Please enter: " << endl;
	cout << "1. Continue";
	cout << "2. exit" << endl;
	cout << "Enter: "; cin >> answer;

	return answer;
}

void GameManager::Play()
{

}

bool GameManager::Quit()
{
	return true;
}

bool GameManager::CheckWin()
{
	if (board->CekColumn() == true && board->CekRegion() == true && board->CekRow() == true)
	{
		return true;
	}
	return false;
}

void GameManager::SendToDatabase()
{

}

void GameManager::SetBoard(Board* board)
{
	this->board = board;
}

Board* GameManager::getBoard()
{
	return board;
}

void GameManager::setPlayer(Player* player)
{
	this->player = player;
}

Player* GameManager::getPlayer()
{
	return player;
}

void GameManager::undo()
{

}

void GameManager::redo()
{

}

void GameManager::FillCell(int x, int y, int value)
{
	board->Fill(x, y, value);
}

void GameManager::DeleteCell(int x, int y)
{
	board->Delete(x, y);
}