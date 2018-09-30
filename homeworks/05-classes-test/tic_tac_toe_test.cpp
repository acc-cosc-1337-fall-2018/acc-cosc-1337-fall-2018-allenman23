#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_board.h"

TEST_CASE("Test for class function game_over()")
{
	Tic_Tac_Toe_Board game;
	REQUIRE(game.game_over() == false);
}

TEST_CASE("Test for set first player")
{
	Tic_Tac_Toe_Board game_x;
	game_x.start_game("X");
	REQUIRE(game_x.get_player() == "X");

	Tic_Tac_Toe_Board game_o;
	game_o.start_game("O");
	REQUIRE(game_o.get_player() == "O");
}

TEST_CASE("Test for win by column")
{
	Tic_Tac_Toe_Board first_column_example;
	first_column_example.start_game("X");
	first_column_example.mark_board(1);
	first_column_example.mark_board(2);
	first_column_example.mark_board(4);
	first_column_example.mark_board(9);
	first_column_example.mark_board(7);
	REQUIRE(first_column_example.game_over() == true);

	Tic_Tac_Toe_Board second_column_example;
	second_column_example.start_game("X");
	second_column_example.mark_board(2);
	second_column_example.mark_board(3);
	second_column_example.mark_board(5);
	second_column_example.mark_board(7);
	second_column_example.mark_board(8);
	REQUIRE(second_column_example.game_over() == true);

	Tic_Tac_Toe_Board third_column_example;
	third_column_example.start_game("X");
	third_column_example.mark_board(3);
	third_column_example.mark_board(1);
	third_column_example.mark_board(6);
	third_column_example.mark_board(7);
	third_column_example.mark_board(9);
	REQUIRE(third_column_example.game_over() == true);
}

TEST_CASE("Test for win by row")
{
	Tic_Tac_Toe_Board first_row_example;
	first_row_example.start_game("X");
	first_row_example.mark_board(1);
	first_row_example.mark_board(7);
	first_row_example.mark_board(2);
	first_row_example.mark_board(9);
	first_row_example.mark_board(3);
	REQUIRE(first_row_example.game_over() == true);

	Tic_Tac_Toe_Board second_row_example;
	second_row_example.start_game("X");
	second_row_example.mark_board(4);
	second_row_example.mark_board(1);
	second_row_example.mark_board(5);
	second_row_example.mark_board(9);
	second_row_example.mark_board(6);
	REQUIRE(second_row_example.game_over() == true);

	Tic_Tac_Toe_Board third_row_example;
	third_row_example.start_game("X");
	third_row_example.mark_board(7);
	third_row_example.mark_board(4);
	third_row_example.mark_board(8);
	third_row_example.mark_board(6);
	third_row_example.mark_board(9);
	REQUIRE(third_row_example.game_over() == true);
}

TEST_CASE("Test for win by diagonal")
{
	Tic_Tac_Toe_Board first_diagonal_example;
	first_diagonal_example.start_game("X");
	first_diagonal_example.mark_board(1);
	first_diagonal_example.mark_board(2);
	first_diagonal_example.mark_board(5);
	first_diagonal_example.mark_board(3);
	first_diagonal_example.mark_board(9);
	REQUIRE(first_diagonal_example.game_over() == true);

	Tic_Tac_Toe_Board second_diagonal_example;
	second_diagonal_example.start_game("X");
	second_diagonal_example.mark_board(7);
	second_diagonal_example.mark_board(2);
	second_diagonal_example.mark_board(5);
	second_diagonal_example.mark_board(8);
	second_diagonal_example.mark_board(3);
	REQUIRE(second_diagonal_example.game_over() == true);
}

TEST_CASE("Test for no winner")
{
	Tic_Tac_Toe_Board no_win_example;
	no_win_example.start_game("X");
	no_win_example.mark_board(1);
	no_win_example.mark_board(2);
	no_win_example.mark_board(3);
	no_win_example.mark_board(5);
	no_win_example.mark_board(4);
	no_win_example.mark_board(7);
	no_win_example.mark_board(6);
	no_win_example.mark_board(9);
	no_win_example.mark_board(8);
	REQUIRE(no_win_example.game_over() == true);
}
