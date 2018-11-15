#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

enum GameType
{
	tic_tac_toe_3,
	tic_tac_toe_4
};

class Tic_Tac_Toe_Manager
{
	public:
		std::unique_ptr<Tic_Tac_Toe_Board> get_game(GameType gt);
		void save_game(std::unique_ptr<Tic_Tac_Toe_Board> b);
		friend std::ostream& operator <<(std::ostream& out, const Tic_Tac_Toe_Manager& m);
		const vector<std::unique_ptr<Tic_Tac_Toe_Board>>& get_games();

	private:
		vector<std::unique_ptr<Tic_Tac_Toe_Board>> boards;
		void update_winner_count(string winner);
		int x_win{ 0 };
		int o_win{ 0 };
		int c_win{ 0 };
};
#endif // !TIC_TAC_TOE_MANAGER_H