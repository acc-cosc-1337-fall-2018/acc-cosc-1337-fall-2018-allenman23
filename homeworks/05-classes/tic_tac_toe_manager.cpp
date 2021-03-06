#include "tic_tac_toe_manager.h"

Tic_Tac_Toe_Manager::Tic_Tac_Toe_Manager()
{
	for (auto& i : tic_tac_toe_data.get_games())
	{
		update_winner_count(i->get_winner());
		boards.push_back(std::move(i));
	}
}

std::unique_ptr<Tic_Tac_Toe_Board> Tic_Tac_Toe_Manager::get_game(GameType gt)
{
	std::unique_ptr<Tic_Tac_Toe_Board> a;
	if (gt == tic_tac_toe_3)
		a = std::make_unique<TicTacToe3>();
	if (gt == tic_tac_toe_4)
		a = std::make_unique<TicTacToe4>();
	return a;
}

void Tic_Tac_Toe_Manager::update_winner_count(string winner)
{
	if (winner == "X")
		++x_win;
	if (winner == "O")
		++o_win;
	if (winner == "C")
		++c_win;
}

void Tic_Tac_Toe_Manager::save_game(std::unique_ptr<Tic_Tac_Toe_Board> b)
{
	update_winner_count(b->get_winner());
	tic_tac_toe_data.save_pegs(b->get_pegs());
	boards.push_back(std::move(b));

}

const vector<std::unique_ptr<Tic_Tac_Toe_Board>>& Tic_Tac_Toe_Manager::get_games()
{
	return boards;
}

void Tic_Tac_Toe_Manager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_win;
	o = o_win;
	c = c_win;
}

std::ostream& operator<<(std::ostream& out, const Tic_Tac_Toe_Manager& m)
{
	out << "Game History:\n";
	for (int i = 0; i < m.boards.size(); ++i)
	{
		out << *m.boards[i];
	}
	out << "\nResults:\n\nX wins: " << m.x_win << "\nO wins: " << m.o_win << "\nC wins: " << m.c_win;
	return out;
}


