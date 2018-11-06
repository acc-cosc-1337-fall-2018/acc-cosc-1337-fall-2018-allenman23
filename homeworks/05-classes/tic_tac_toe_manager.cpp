#include "tic_tac_toe_manager.h"

std::unique_ptr<Tic_Tac_Toe_Board> Tic_Tac_Toe_Manager::get_game(GameType gt)
{
	if (gt == ttt3)
		return (std::unique_ptr<TicTacToe3>());
	if (gt == ttt4)
		return (std::unique_ptr<TicTacToe4>());
}

void Tic_Tac_Toe_Manager::update_winner_count(string winner)
{

}
