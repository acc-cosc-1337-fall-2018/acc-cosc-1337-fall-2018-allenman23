#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>

int main()
{
	Tic_Tac_Toe_Board tic_tac_toe_game;
	string keep_playing;
	int position;
	string player;
	bool valid_choice;
	do
	{
		do
		{
			cout << "Which player shall go first? X or O : ";
			cin >> player;
			if ((player == "X") || (player == "O"))
			{
				cout << "\n";
				valid_choice = true;
			}
			else
			{
				cout << "\nINVALID CHOICE\n\n";
				valid_choice = false;
			}
		} while (!valid_choice);

		tic_tac_toe_game.start_game(player);
		while (!tic_tac_toe_game.game_over())
		{
			cout << "Enter position for " << tic_tac_toe_game.get_player() << ": ";
			cin >> position;
			tic_tac_toe_game.mark_board(position);
			tic_tac_toe_game.display_board();
		}
		cout << "\nEnter 1 to play again (Any other key to exit): ";
		cin >> keep_playing;
		cout << "\n";
	} while (keep_playing == "1");
	return 0;
}