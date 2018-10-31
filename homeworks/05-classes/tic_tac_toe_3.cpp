#include "tic_tac_toe_3.h"

TicTacToe3::TicTacToe3()
{
	for (int i = 0; i < 9; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}

void TicTacToe3::display_board(std::ostream& out) const
{
	cout << "\n";
	for (int i = 0; i < 3; ++i)
		out << pegs[i * 3].val << "|" << pegs[(i * 3) + 1].val << "|" << pegs[(i * 3) + 2].val << "\n";
	out << "\nX Wins: " << x_win << "\nO Wins: " << o_win << "\nC Wins: " << c_win << "\n\n";
}

bool TicTacToe3::check_column_win() const
{
	bool check1;
	bool check2;
	bool check3;
	//	check first column for all X's or O's
	check1 = (pegs[0].val == pegs[3].val);
	check2 = (pegs[3].val == pegs[6].val);
	check3 = (pegs[0].val == "X" || pegs[0].val == "O");
	if (check1 && check2 && check3)
		return true;
	//  check second column for all X's or O's
	check1 = (pegs[1].val == pegs[4].val);
	check2 = (pegs[4].val == pegs[7].val);
	check3 = (pegs[1].val == "X" || pegs[1].val == "O");
	if (check1 && check2 && check3)
		return true;
	//  check third column for all X's or O's
	check1 = (pegs[2].val == pegs[5].val);
	check2 = (pegs[5].val == pegs[8].val);
	check3 = (pegs[2].val == "X" || pegs[2].val == "O");
	if (check1 && check2 && check3)
		return true;
	else // return false if no columns are winners
		return false;
}

bool TicTacToe3::check_row_win() const
{
	bool check1;
	bool check2;
	bool check3;
	//	check first row for all X's or O's
	check1 = (pegs[0].val == pegs[1].val);
	check2 = (pegs[1].val == pegs[2].val);
	check3 = (pegs[0].val == "X" || pegs[0].val == "O");
	if (check1 && check2 && check3)
		return true;
	//  check second row for all X's or O's
	check1 = (pegs[3].val == pegs[4].val);
	check2 = (pegs[4].val == pegs[5].val);
	check3 = (pegs[3].val == "X" || pegs[3].val == "O");
	if (check1 && check2 && check3)
		return true;
	//  check third row for all X's or O's
	check1 = (pegs[6].val == pegs[7].val);
	check2 = (pegs[7].val == pegs[8].val);
	check3 = (pegs[6].val == "X" || pegs[6].val == "O");
	if (check1 && check2 && check3)
		return true;
	else // return false if no rows are winners
		return false;

}

bool TicTacToe3::check_diagonal_win() const
{
	bool check1;
	bool check2;
	bool check3;
	//	check first diagonal for all X's or O's
	check1 = (pegs[0].val == pegs[4].val);
	check2 = (pegs[4].val == pegs[8].val);
	check3 = (pegs[0].val == "X" || pegs[0].val == "O");
	if (check1 && check2 && check3)
		return true;
	//  check second diagonal for all X's or O's
	check1 = (pegs[2].val == pegs[4].val);
	check2 = (pegs[4].val == pegs[6].val);
	check3 = (pegs[2].val == "X" || pegs[2].val == "O");
	if (check1 && check2 && check3)
		return true;
	else // return false if no diagonals are winners
		return false;

}

void TicTacToe3::get_input(std::istream & in)
{
	int position;
	cout << "Enter position for " << get_player() << ": ";
	in >> position;
	mark_board(position);
}
