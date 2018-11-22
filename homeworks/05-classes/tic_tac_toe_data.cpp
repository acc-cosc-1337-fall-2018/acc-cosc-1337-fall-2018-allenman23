#include "tic_tac_toe_data.h"

vector<std::unique_ptr<Tic_Tac_Toe_Board>> TicTacToeData::get_games()
{
	vector<std::unique_ptr<Tic_Tac_Toe_Board>> bs;
	string line;
	std::ifstream myfile;
	myfile.open(file_name);
	while (!myfile.eof())
	{
		vector<Peg> p;
		getline(myfile, line);
		for (auto ch : line)
		{
			string character(1, ch);
			Peg peg1(character);
			p.push_back(peg1);
		}
		std::unique_ptr<Tic_Tac_Toe_Board> b;
		if (p.size() == 9)
			b = std::make_unique<TicTacToe3>(p);
		else if (p.size() == 16)
			b = std::make_unique<TicTacToe4>(p);
		bs.push_back(std::move(b));
	}
	myfile.close();
	return bs;
}

void TicTacToeData::save_pegs(const vector<Peg>& p)
{
	std::ofstream myfile;
	myfile.open(file_name, std::ios::app);
	myfile << "\n";
	for (auto i : p)
	{
		myfile << i.val;
	}
	myfile.close();
}
