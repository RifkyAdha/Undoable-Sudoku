#include "CommandDelete.h"

void CommandDelete::setSaveboard(Board Saveboard)
{
	this->Saveboard = Saveboard;
}

Board CommandDelete::getSaveboard()
{
	return Saveboard;
}

void CommandDelete::undo(int x, int y, int value)
{
	Saveboard.Fill(x, y, value);
}

void CommandDelete::execute(int x, int y)
{
	Saveboard.Delete(x, y);
}