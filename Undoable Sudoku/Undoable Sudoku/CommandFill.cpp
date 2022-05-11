#include "CommandFill.h"
void CommandFill::setSaveboard(Board Saveboard)
{
	this->Saveboard = Saveboard;
}

Board CommandFill::getSaveboard()
{
	return Saveboard;
}

void CommandFill::undo(int x, int y)
{
	Saveboard.Delete(x, y);
}

void CommandFill::execute(int x, int y, int value)
{
	Saveboard.Fill(x, y, value);
}