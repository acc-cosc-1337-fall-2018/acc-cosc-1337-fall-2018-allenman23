#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>

int main()
{
	Tic_Tac_Toe_Board a, b, c, result;
	vector<Tic_Tac_Toe_Board> boards;

	a.start_game("X");
	while (!a.game_over())
	{
		cout << "Tic Tac Toe Board A\n" << a;
		cin >> a;
		cout << "\n";
	}
	cout << "Tic Tac Toe Board A\n" << a;

	b.start_game("X");
	while (!b.game_over())
	{
		cout << "Tic Tac Toe Board B\n" << b;
		cin >> b;
		cout << "\n";
	}
	cout << "Tic Tac Toe Board B\n" << b;

	c.start_game("X");
	while (!c.game_over())
	{
		cout << "Tic Tac Toe Board C\n" << c;
		cin >> c;
		cout << "\n";
	}
	cout << "Tic Tac Toe Board C\n" << c;

	boards.push_back(a);
	boards.push_back(b);
	boards.push_back(c);
	for (auto i : boards)
	{
		result += i;
	}
	cout << "Tic Tac Toe Board Result\n" << result;

	return 0;
}