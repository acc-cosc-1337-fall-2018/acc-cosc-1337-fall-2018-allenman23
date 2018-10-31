#include "tic_tac_toe_4.h"

TicTacToe4::TicTacToe4()
{
	for (int i = 0; i < 16; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}

void TicTacToe4::display_board(std::ostream& out) const
{
	cout << "\n";
	for (int i = 0; i < 4; ++i)
		out << pegs[i * 4].val << "|" << pegs[(i * 4) + 1].val << "|" << pegs[(i * 4) + 2].val << "|" << pegs[(i * 4) + 3].val << "\n";
	out << "\nX Wins: " << x_win << "\nO Wins: " << o_win << "\nC Wins: " << c_win << "\n\n";
}

bool TicTacToe4::check_column_win() const
{
	bool check1;
	bool check2;
	bool check3;
	bool check4;
	//	check first column for all X's or O's
	check1 = (pegs[0].val == pegs[4].val);
	check2 = (pegs[4].val == pegs[8].val);
	check3 = (pegs[8].val == pegs[12].val);
	check4 = (pegs[0].val == "X" || pegs[0].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check second column for all X's or O's
	check1 = (pegs[1].val == pegs[5].val);
	check2 = (pegs[5].val == pegs[9].val);
	check3 = (pegs[9].val == pegs[13].val);
	check4 = (pegs[1].val == "X" || pegs[1].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check third column for all X's or O's
	check1 = (pegs[2].val == pegs[6].val);
	check2 = (pegs[6].val == pegs[10].val);
	check3 = (pegs[10].val == pegs[14].val);
	check4 = (pegs[2].val == "X" || pegs[2].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check fourth column for all X's or O's
	check1 = (pegs[3].val == pegs[7].val);
	check2 = (pegs[7].val == pegs[11].val);
	check3 = (pegs[11].val == pegs[15].val);
	check4 = (pegs[3].val == "X" || pegs[3].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	else // return false if no columns are winners
		return false;
}

bool TicTacToe4::check_row_win() const
{
	bool check1;
	bool check2;
	bool check3;
	bool check4;
	//	check first row for all X's or O's
	check1 = (pegs[0].val == pegs[1].val);
	check2 = (pegs[1].val == pegs[2].val);
	check3 = (pegs[2].val == pegs[3].val);
	check4 = (pegs[0].val == "X" || pegs[0].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check second row for all X's or O's
	check1 = (pegs[4].val == pegs[5].val);
	check2 = (pegs[5].val == pegs[6].val);
	check3 = (pegs[6].val == pegs[7].val);
	check4 = (pegs[4].val == "X" || pegs[4].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check third row for all X's or O's
	check1 = (pegs[8].val == pegs[9].val);
	check2 = (pegs[9].val == pegs[10].val);
	check3 = (pegs[10].val == pegs[11].val);
	check4 = (pegs[8].val == "X" || pegs[8].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check fourth row for all X's or O's
	check1 = (pegs[12].val == pegs[13].val);
	check2 = (pegs[13].val == pegs[14].val);
	check3 = (pegs[14].val == pegs[15].val);
	check4 = (pegs[12].val == "X" || pegs[12].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	else // return false if no rows are winners
		return false;
}

bool TicTacToe4::check_diagonal_win() const
{
	bool check1;
	bool check2;
	bool check3;
	bool check4;
	//	check first diagonal for all X's or O's
	check1 = (pegs[0].val == pegs[5].val);
	check2 = (pegs[5].val == pegs[10].val);
	check3 = (pegs[10].val == pegs[15].val);
	check4 = (pegs[0].val == "X" || pegs[0].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	//  check second diagonal for all X's or O's
	check1 = (pegs[3].val == pegs[6].val);
	check2 = (pegs[6].val == pegs[9].val);
	check3 = (pegs[9].val == pegs[12].val);
	check4 = (pegs[3].val == "X" || pegs[3].val == "O");
	if (check1 && check2 && check3 && check4)
		return true;
	else // return false if no diagonals are winners
		return false;
}

void TicTacToe4::get_input(std::istream & in)
{
	int position;
	cout << "Enter position for " << get_player() << ": ";
	in >> position;
	mark_board(position);
}
