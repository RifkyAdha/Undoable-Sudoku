#pragma once
#include "InterfaceCommand.h"
class CommandDelete : public InterfaceCommand
{
public:
	void setSaveboard(Board);
	Board getSaveboard();
	void undo(int, int, int);
	void execute(int, int);
};

