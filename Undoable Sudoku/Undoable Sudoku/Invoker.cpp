#include "Invoker.h"
void Invoker::Pop()
{
	ItCommand.pop();
}

void Invoker::Push(InterfaceCommand* command)
{
	ItCommand.push(command);
}