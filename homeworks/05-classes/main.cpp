#include "tic_tac_toe_board.h"
#include<iostream>

int main()
{
	Tic_Tac_Toe_Board tic_tac_toe_game;
	int keep_playing;
	int position;
	do
	{
		string player = "X";
		tic_tac_toe_game.start_game("X");
		while (!tic_tac_toe_game.game_over())
		{
//			cout << "Enter position for " << tic_tac_toe_game.get_player() << ": ";
			cout << "Enter position: ";
			cin >> position;
			tic_tac_toe_game.mark_board(position);
			tic_tac_toe_game.display_board();
		}
		cout << "\nEnter 1 to play again (Any other key to exit): ";
		cin >> keep_playing;
		cout << "\n";
	} while (keep_playing == 1);
	return 0;
}