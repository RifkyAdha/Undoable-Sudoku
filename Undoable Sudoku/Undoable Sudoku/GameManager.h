#pragma once
#include <iostream>
#include <string.h>
#include "InterfaceCommand.h"
#include "CommandFill.h"
#include "CommandDelete.h"
#include "Player.h"
#include "Board.h"
#include "Invoker.h"
using namespace std;
class GameManager
{
protected:
	Board board;
	Player player;
	Invoker undo;
	Invoker redo;

public:
	GameManager();
	void Initialize();
	void Pause();
	void Play();
	void Quit();
	void CheckWin();
	void SendToDatabase();
	void SetBoard(Board);
	void DeleteCell(int, int);
	void FillCell(int, int, int);
	void redo();
	void undo();
	Player getPlayer();
	void setPlayer(Player);
	Board getBoard();

};

