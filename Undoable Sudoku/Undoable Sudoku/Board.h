#pragma once
#include <iostream>
using namespace std;
class Board
{
protected:
	int board[9][9];

public:
	Board();
	void GenerateNumber();
	void PrintBoard();
	bool CekRegion();
	bool CekRow();
	bool CekColumn();
	void Delete(int, int);
	void Fill(int, int, int);
};

