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
	pegs[position - 1] = next_player;
	set_next_player();
}

string Tic_Tac_Toe_Board::get_player()
{
	return next_player;
}

/*void Tic_Tac_Toe_Board::display_board()
{
	cout << "\n";
	for (int i = 0; i < 3; ++i)
		cout << pegs[i * 3] << "|" << pegs[(i * 3) + 1] << "|" << pegs[(i * 3) + 2] << "\n";
	cout << "\n";

}*/

void Tic_Tac_Toe_Board::set_next_player()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}

bool Tic_Tac_Toe_Board::check_column_win()
{
	bool check1;
	bool check2;
	bool check3;
//	check first column for all X's or O's
	check1 = (pegs[0] == pegs[3]);
	check2 = (pegs[3] == pegs[6]);
	check3 = (pegs[0] == "X" || pegs[0] == "O");
	if (check1 && check2 && check3)
		return true;
//  check second column for all X's or O's
	check1 = (pegs[1] == pegs[4]);
	check2 = (pegs[4] == pegs[7]);
	check3 = (pegs[1] == "X" || pegs[1] == "O");
	if (check1 && check2 && check3)
		return true;
//  check third column for all X's or O's
	check1 = (pegs[2] == pegs[5]);
	check2 = (pegs[5] == pegs[8]);
	check3 = (pegs[2] == "X" || pegs[2] == "O");
	if (check1 && check2 && check3)
		return true;
	else // return false if no columns are winners
		return false;
}

bool Tic_Tac_Toe_Board::check_row_win()
{
	bool check1;
	bool check2;
	bool check3;
	//	check first row for all X's or O's
	check1 = (pegs[0] == pegs[1]);
	check2 = (pegs[1] == pegs[2]);
	check3 = (pegs[0] == "X" || pegs[0] == "O");
	if (check1 && check2 && check3)
		return true;
	//  check second row for all X's or O's
	check1 = (pegs[3] == pegs[4]);
	check2 = (pegs[4] == pegs[5]);
	check3 = (pegs[3] == "X" || pegs[3] == "O");
	if (check1 && check2 && check3)
		return true;
	//  check third row for all X's or O's
	check1 = (pegs[6] == pegs[7]);
	check2 = (pegs[7] == pegs[8]);
	check3 = (pegs[6] == "X" || pegs[6] == "O");
	if (check1 && check2 && check3)
		return true;
	else // return false if no rows are winners
		return false;

}

bool Tic_Tac_Toe_Board::check_diagonal_win()
{
	bool check1;
	bool check2;
	bool check3;
	//	check first diagonal for all X's or O's
	check1 = (pegs[0] == pegs[4]);
	check2 = (pegs[4] == pegs[8]);
	check3 = (pegs[0] == "X" || pegs[0] == "O");
	if (check1 && check2 && check3)
		return true;
	//  check second diagonal for all X's or O's
	check1 = (pegs[2] == pegs[4]);
	check2 = (pegs[4] == pegs[6]);
	check3 = (pegs[2] == "X" || pegs[2] == "O");
	if (check1 && check2 && check3)
		return true;
	else // return false if no diagonals are winners
		return false;

}

void Tic_Tac_Toe_Board::clear_board()
{
	for (auto& i : pegs)
		i = " ";
}

bool Tic_Tac_Toe_Board::check_board_full()
{
	for (auto i : pegs)
	{
		if (i == " ")
			return false;
	}
	return true;
}

std::istream& operator>>(std::istream& in, Tic_Tac_Toe_Board& d)
{
	int position;
	cout << "Enter position for " << d.get_player() << ": ";
	in >> position;
	d.mark_board(position);
	return in;
}

std::ostream& operator<<(std::ostream& out, const Tic_Tac_Toe_Board& d)
{
	cout << "\n";
	for (int i = 0; i < 3; ++i)
		out << d.pegs[i * 3] << "|" << d.pegs[(i * 3) + 1] << "|" << d.pegs[(i * 3) + 2] << "\n";
	out << "\nX Wins: " << d.x_win << "\nO Wins: " << d.o_win << "\nC Wins: " << d.c_win << "\n\n";
	return out;
}

Tic_Tac_Toe_Board Tic_Tac_Toe_Board::operator+=(const Tic_Tac_Toe_Board& tttb)
{
	x_win += tttb.x_win;
	o_win += tttb.o_win;
	c_win += tttb.c_win;
	return Tic_Tac_Toe_Board();
}

/*
Tic_Tac_Toe_Board operator+(const Tic_Tac_Toe_Board& b, const Tic_Tac_Toe_Board& b2)
{
	Tic_Tac_Toe_Board tttb;
	tttb.x_win = b.x_win + b2.x_win;
	tttb.o_win = b.o_win + b2.o_win;
	tttb.c_win = b.c_win + b2.c_win;
	return tttb;
}
*/
