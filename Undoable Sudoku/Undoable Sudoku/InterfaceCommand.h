#pragma once
#include "Board.h"
using namespace std;

class InterfaceCommand
{
protected:
	Board Saveboard;

public:
	virtual void setSaveboard() = 0;
	virtual Board getSaveboard() = 0;
	virtual void undo() = 0;
	virtual void execute() = 0;
};

