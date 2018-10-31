#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>

int main()
{
	TicTacToe3 a;
	a.start_game("X");
	while (!a.game_over())
	{
		cout << "Tic Tac Toe 3\n" << a;
		cin >> a;
		cout << "\n";
	}
	cout << "Tic Tac Toe 3\n" << a;

	TicTacToe4 b;
	b.start_game("X");
	while (!b.game_over())
	{
		cout << "Tic Tac Toe 4\n" << b;
		cin >> b;
		cout << "\n";
	}
	cout << "Tic Tac Toe 4\n" << b;

	return 0;
}