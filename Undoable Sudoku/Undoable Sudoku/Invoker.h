#pragma once
#include <iostream>
#include <stack>
#include <vector>
#include "InterfaceCommand.h"
#include "CommandFill.h"
#include "CommandDelete.h"

using namespace std;
class Invoker
{
protected:
	stack<InterfaceCommand*> ItCommand;

public:
	void Pop();
	void Push(InterfaceCommand*);

};

