#pragma once
#include "InterfaceCommand.h"
class CommandFill : public InterfaceCommand
{
public:
	void setSaveboard(Board);
	Board getSaveboard();
	void undo(int, int);
	void execute(int, int, int);
};

