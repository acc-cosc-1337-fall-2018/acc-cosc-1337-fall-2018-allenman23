#include "tic_tac_toe_board.h"
#include<string>
#include<iostream>

bool Tic_Tac_Toe_Board::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		if (next_player == "O")
			++x_win;
		else
			++o_win;
		return true;
	}
	if (check_board_full())
	{
		++c_win;
		return true;
	}
	else
		return false;
}

void Tic_Tac_Toe_Board::start_game(string player)
{
	next_player = player;
	clear_board();
}

void Tic_Tac_Toe_Board::mark_board(int position)
{
	pegs[position - 1].val = next_player;
	set_next_player();
}

string Tic_Tac_Toe_Board::get_player()
{
	return next_player;
}

void Tic_Tac_Toe_Board::set_next_player()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}

void Tic_Tac_Toe_Board::clear_board()
{
	for (auto& i : pegs)
		i.val = " ";
}

bool Tic_Tac_Toe_Board::check_board_full() const
{
	for (auto i : pegs)
	{
		if (i.val == " ")
			return false;
	}
	return true;
}

std::istream& operator>>(std::istream& in, Tic_Tac_Toe_Board& d)
{
	d.get_input(in);
	return in;
}

std::ostream& operator<<(std::ostream& out, const Tic_Tac_Toe_Board& d)
{
	d.display_board(out);
	return out;
}

void get_input(std::istream& in)
{}
int position;
cout << "Enter position for " << d.get_player() << ": ";
in >> position;
d.mark_board(position);
