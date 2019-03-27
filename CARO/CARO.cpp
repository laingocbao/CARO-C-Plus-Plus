﻿#include<fstream>
#include "Board.h"

void getBoardFromFile() {
	// Board *board = new Board();
	ifstream myReadFile;
	myReadFile.open("board.txt");
	char output;
	if (myReadFile.is_open()) {
		for (int i = 0; i < 15; i++) {
			for(int j = 0; j < 15; j++)
			{
				myReadFile >> output;
				cout << output;
				// board->setCell(i, j, output);
			}			
		}
		myReadFile >> output;
	}
	myReadFile.close();
	// board->displayBoard();
	// cout << board->getRoot()->heuristicCaro('O');
}

int main()
{
	Board *board = new Board();
	ifstream myReadFile;
	myReadFile.open("board.txt");
	char output;
	if (myReadFile.is_open()) {
		for (int i = 0; i < 15; i++) {
			for(int j = 0; j < 15; j++)
			{
				myReadFile >> output;
				// cout << output;
				board->setCell(i, j, output);
			}			
		}
		myReadFile >> output;
	}
	myReadFile.close();
	// cout << board->getRoot()->heuristicCaro('O');
	board->displayBoard();
	board->getMoveComputer('O');
	board->displayBoard();

	// list<int> point;
	// point.push_back(7 * 15 + 7);
	// point.push_back(7 * 15 + 8);
	// point.push_back(6 * 15 + 5);
	// point.push_back(6 * 15 + 8);
	// point.push_back(8 * 15 + 8);
	// point.push_back(9 * 15 + 8);
	// Board *board = new Board();
	// board->displayBoard();

	// /*board->setCell(6, 7, 'X');
	// board->setCell(7, 7, 'X');
	// board->setCell(7, 8, 'X');
	// board->setCell(8, 6, 'O');
	// board->setCell(8, 7, 'O');
	// board->setCell(9, 7, 'O');
	// board->displayBoard();
	// cout << board->getRoot()->heuristicCaro('O');*/

	// if (board->getRoot()->getRow() == 3)
	// {
	// 	while (board->getRoot()->checkBoardFull())
	// 	{
	// 		cout << "Luot di cua may tinh\n";
	// 		board->getMoveComputer();
	// 		board->displayBoard();
	// 		if (board->checkWinTicTacToe('O'))
	// 		{
	// 			cout << "May thang\n";
	// 			return 0;
	// 		}

	// 		board->getMovePlayer('X');
	// 		board->displayBoard();
	// 		if (board->checkWinTicTacToe('X'))
	// 		{
	// 			cout << "Nguoi choi thang\n";
	// 			return 0;
	// 		}
	// 	}

	// 	cout << "Hoa\n";
	// }
	// else
	// {
	// 	while (board->getRoot()->checkBoardFull())
	// 	{
	// 		cout << "Luot di cua nguoi choi\n";
	// 		/*if (point.size() > 0) {
	// 			int index = point.front();
	// 			point.pop_front();
	// 			board->setCell(index / 15, index % 15, 'X');
	// 		}
	// 		else {
	// 			board->getMovePlayer('X');
	// 		}*/
	// 		board->getMovePlayer('X');
	// 		board->displayBoard();
	// 		if (board->checkWinCaro('X'))
	// 		{
	// 			cout << "Nguoi choi thang\n";
	// 			return 0;
	// 		}

	// 		cout << "Luot di cua may tinh\n";
	// 		board->getMoveComputer();
	// 		board->displayBoard();
	// 		if (board->checkWinCaro('O'))
	// 		{
	// 			cout << "May thang\n";
	// 			return 0;
	// 		}
	// 	}

	// 	cout << "Hoa\n";
	// }

	return 0;
}
