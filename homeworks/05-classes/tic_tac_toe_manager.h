#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

enum GameType
{
	ttt3,
	ttt4
};

class Tic_Tac_Toe_Manager
{
	public:
		Tic_Tac_Toe_Manager() = default;
		Tic_Tac_Toe_Manager(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
		std::unique_ptr<Tic_Tac_Toe_Board> get_game(GameType gt);

	private:
		void update_winner_count(string winner);
		int x_win{ 0 };
		int o_win{ 0 };
		int c_win{ 0 };
};
#endif // !TIC_TAC_TOE_4_H