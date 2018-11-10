#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

//#include<string>
#include<vector>
#include<iostream>
#include "peg.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Tic_Tac_Toe_Board
{
public:
	Tic_Tac_Toe_Board() = default;
//	Tic_Tac_Toe_Board(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	friend std::istream& operator >>(std::istream& in, Tic_Tac_Toe_Board& d);
	friend std::ostream& operator <<(std::ostream& out, const Tic_Tac_Toe_Board& d);
	string get_winner();
	vector<Peg>& get_pegs();

protected:
	void set_next_player();
	virtual bool check_column_win() const = 0;
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	virtual void display_board(std::ostream& out) const = 0;
	virtual void get_input(std::istream& in) = 0;
	void clear_board();
	bool check_board_full() const;
	vector<Peg> pegs;
	string next_player;
};


#endif // TIC_TAC_TOE_BOARD_H