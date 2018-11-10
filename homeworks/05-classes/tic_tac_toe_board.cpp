#include "tic_tac_toe_board.h"
#include<string>
#include<iostream>

bool Tic_Tac_Toe_Board::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
		return true;
	if (check_board_full())
		return true;
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

string Tic_Tac_Toe_Board::get_winner()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		if (next_player == "O")
			return "X";
		else
			return "O";
	}
	if (check_board_full())
	{
		return "C";
	}
	return "Game not over";
}

vector<Peg>& Tic_Tac_Toe_Board::get_pegs()
{
	/*

		STOP copying my code!!! Copying and pasting my work and passing it off as your ideas is SCHOLASTIC DISHONESTY!!!
		I spend alot of time writing and debugging my code and I didn't do it for YOU!!! If I catch you STEALING my work
		again, I will notify the instructor and ACC!!! STOP CHEATING and do your own work!!!

	*/

	return pegs;
}

