#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include<iostream>
#include<string>

int main()
{
	TicTacToe3 a;
	a.start_game("X");
	while (!a.game_over())
	{
		cout << "Tic Tac Toe Board A\n" << a;
		cin >> a;
		cout << "\n";
	}
	cout << "Tic Tac Toe Board A\n" << a;

	return 0;
}