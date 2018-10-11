#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

//#include<string>
#include<vector>
#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Tic_Tac_Toe_Board
{
public:
	Tic_Tac_Toe_Board() = default;
	Tic_Tac_Toe_Board(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
//	void display_board();
	friend std::istream& operator >>(std::istream& in, Tic_Tac_Toe_Board& d);
	friend std::ostream& operator <<(std::ostream& out, const Tic_Tac_Toe_Board& d);
//	friend Tic_Tac_Toe_Board operator+(const Tic_Tac_Toe_Board& b, const Tic_Tac_Toe_Board& b2);
	Tic_Tac_Toe_Board operator+=(const Tic_Tac_Toe_Board& tttb);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{ 9, " " };
	string next_player;
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
};


#endif // TIC_TAC_TOE_BOARD_H