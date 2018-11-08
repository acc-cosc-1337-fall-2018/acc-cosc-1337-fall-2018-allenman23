#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

int main()
{
	Tic_Tac_Toe_Manager manager;
	int choice;
	GameType game_choice;
	std::unique_ptr<Tic_Tac_Toe_Board> game1;
	string keep_playing;
	string player_choice;
	do
	{
		cout << "Play TicTacToe3 (Enter 0) or TicTacToe4 (Enter 1): ";
		cin >> choice;
		cout << "\n";
		if (choice == 0)
			game_choice = tic_tac_toe_3;
		if (choice == 1)
			game_choice = tic_tac_toe_4;
		game1 = manager.get_game(game_choice);
		cout << "Which player goes first? (X or O): ";
		cin >> player_choice;
		game1->start_game(player_choice);
		while (!game1->game_over())
		{
			cout << *game1;
			cin >> *game1;
		}
		cout << *game1 << "\n";
		cout << "Winner: " << game1->get_winner() << "\n\n";
		manager.save_game(std::move(game1));
		cout << "Play again? (Enter Y or N): ";
		cin >> keep_playing;
		cout << "\n";
	} while (keep_playing == "Y");
	cout << manager;
	return 0;
}