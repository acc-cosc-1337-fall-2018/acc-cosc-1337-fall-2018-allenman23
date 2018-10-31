#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Test for class function game_over() for TicTacToe3")
{
	TicTacToe3 game;
	REQUIRE(game.game_over() == false);
}

TEST_CASE("Test for set first player for TicTacToe3")
{
	TicTacToe3 game_x;
	game_x.start_game("X");
	REQUIRE(game_x.get_player() == "X");

	TicTacToe3 game_o;
	game_o.start_game("O");
	REQUIRE(game_o.get_player() == "O");
}

TEST_CASE("Test for win by column for TicTacToe3")
{
	TicTacToe3 first_column_example;
	first_column_example.start_game("X");
	first_column_example.mark_board(1);
	first_column_example.mark_board(2);
	first_column_example.mark_board(4);
	first_column_example.mark_board(9);
	first_column_example.mark_board(7);
	REQUIRE(first_column_example.game_over() == true);

	TicTacToe3 second_column_example;
	second_column_example.start_game("X");
	second_column_example.mark_board(2);
	second_column_example.mark_board(3);
	second_column_example.mark_board(5);
	second_column_example.mark_board(7);
	second_column_example.mark_board(8);
	REQUIRE(second_column_example.game_over() == true);

	TicTacToe3 third_column_example;
	third_column_example.start_game("X");
	third_column_example.mark_board(3);
	third_column_example.mark_board(1);
	third_column_example.mark_board(6);
	third_column_example.mark_board(7);
	third_column_example.mark_board(9);
	REQUIRE(third_column_example.game_over() == true);
}

TEST_CASE("Test for win by row for TicTacToe3")
{
	TicTacToe3 first_row_example;
	first_row_example.start_game("X");
	first_row_example.mark_board(1);
	first_row_example.mark_board(7);
	first_row_example.mark_board(2);
	first_row_example.mark_board(9);
	first_row_example.mark_board(3);
	REQUIRE(first_row_example.game_over() == true);

	TicTacToe3 second_row_example;
	second_row_example.start_game("X");
	second_row_example.mark_board(4);
	second_row_example.mark_board(1);
	second_row_example.mark_board(5);
	second_row_example.mark_board(9);
	second_row_example.mark_board(6);
	REQUIRE(second_row_example.game_over() == true);

	TicTacToe3 third_row_example;
	third_row_example.start_game("X");
	third_row_example.mark_board(7);
	third_row_example.mark_board(4);
	third_row_example.mark_board(8);
	third_row_example.mark_board(6);
	third_row_example.mark_board(9);
	REQUIRE(third_row_example.game_over() == true);
}

TEST_CASE("Test for win by diagonal for TicTacToe3")
{
	TicTacToe3 first_diagonal_example;
	first_diagonal_example.start_game("X");
	first_diagonal_example.mark_board(1);
	first_diagonal_example.mark_board(2);
	first_diagonal_example.mark_board(5);
	first_diagonal_example.mark_board(3);
	first_diagonal_example.mark_board(9);
	REQUIRE(first_diagonal_example.game_over() == true);

	TicTacToe3 second_diagonal_example;
	second_diagonal_example.start_game("X");
	second_diagonal_example.mark_board(7);
	second_diagonal_example.mark_board(2);
	second_diagonal_example.mark_board(5);
	second_diagonal_example.mark_board(8);
	second_diagonal_example.mark_board(3);
	REQUIRE(second_diagonal_example.game_over() == true);
}

TEST_CASE("Test for no winner for TicTacToe3")
{
	TicTacToe3 no_win_example;
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
///////////
TEST_CASE("Test for class function game_over() for TicTacToe4")
{
	TicTacToe4 game;
	REQUIRE(game.game_over() == false);
}

TEST_CASE("Test for set first player for TicTacToe4")
{
	TicTacToe4 game_x;
	game_x.start_game("X");
	REQUIRE(game_x.get_player() == "X");

	TicTacToe4 game_o;
	game_o.start_game("O");
	REQUIRE(game_o.get_player() == "O");
}

TEST_CASE("Test for win by column for TicTacToe4")
{
	TicTacToe4 first_column_example;
	first_column_example.start_game("X");
	first_column_example.mark_board(1);
	first_column_example.mark_board(2);
	first_column_example.mark_board(5);
	first_column_example.mark_board(8);
	first_column_example.mark_board(9);
	first_column_example.mark_board(10);
	first_column_example.mark_board(13);
	REQUIRE(first_column_example.game_over() == true);

	TicTacToe4 second_column_example;
	second_column_example.start_game("X");
	second_column_example.mark_board(2);
	second_column_example.mark_board(3);
	second_column_example.mark_board(6);
	second_column_example.mark_board(7);
	second_column_example.mark_board(10);
	second_column_example.mark_board(8);
	second_column_example.mark_board(14);
	REQUIRE(second_column_example.game_over() == true);

	TicTacToe4 third_column_example;
	third_column_example.start_game("X");
	third_column_example.mark_board(3);
	third_column_example.mark_board(1);
	third_column_example.mark_board(7);
	third_column_example.mark_board(5);
	third_column_example.mark_board(11);
	third_column_example.mark_board(2);
	third_column_example.mark_board(15);
	REQUIRE(third_column_example.game_over() == true);

	TicTacToe4 fourth_column_example;
	fourth_column_example.start_game("X");
	fourth_column_example.mark_board(4);
	fourth_column_example.mark_board(1);
	fourth_column_example.mark_board(8);
	fourth_column_example.mark_board(5);
	fourth_column_example.mark_board(12);
	fourth_column_example.mark_board(2);
	fourth_column_example.mark_board(16);
	REQUIRE(fourth_column_example.game_over() == true);
}

TEST_CASE("Test for win by row for TicTacToe4")
{
	TicTacToe4 first_row_example;
	first_row_example.start_game("X");
	first_row_example.mark_board(1);
	first_row_example.mark_board(7);
	first_row_example.mark_board(2);
	first_row_example.mark_board(9);
	first_row_example.mark_board(3);
	first_row_example.mark_board(8);
	first_row_example.mark_board(4);
	REQUIRE(first_row_example.game_over() == true);

	TicTacToe4 second_row_example;
	second_row_example.start_game("X");
	second_row_example.mark_board(5);
	second_row_example.mark_board(1);
	second_row_example.mark_board(6);
	second_row_example.mark_board(9);
	second_row_example.mark_board(7);
	second_row_example.mark_board(2);
	second_row_example.mark_board(8);
	REQUIRE(second_row_example.game_over() == true);

	TicTacToe4 third_row_example;
	third_row_example.start_game("X");
	third_row_example.mark_board(9);
	third_row_example.mark_board(4);
	third_row_example.mark_board(10);
	third_row_example.mark_board(6);
	third_row_example.mark_board(11);
	third_row_example.mark_board(1);
	third_row_example.mark_board(12);
	REQUIRE(third_row_example.game_over() == true);

	TicTacToe4 fourth_row_example;
	fourth_row_example.start_game("X");
	fourth_row_example.mark_board(13);
	fourth_row_example.mark_board(4);
	fourth_row_example.mark_board(14);
	fourth_row_example.mark_board(6);
	fourth_row_example.mark_board(15);
	fourth_row_example.mark_board(1);
	fourth_row_example.mark_board(16);
	REQUIRE(fourth_row_example.game_over() == true);
}

TEST_CASE("Test for win by diagonal for TicTacToe4")
{
	TicTacToe4 first_diagonal_example;
	first_diagonal_example.start_game("X");
	first_diagonal_example.mark_board(1);
	first_diagonal_example.mark_board(2);
	first_diagonal_example.mark_board(6);
	first_diagonal_example.mark_board(3);
	first_diagonal_example.mark_board(11);
	first_diagonal_example.mark_board(5);
	first_diagonal_example.mark_board(16);
	REQUIRE(first_diagonal_example.game_over() == true);

	TicTacToe4 second_diagonal_example;
	second_diagonal_example.start_game("X");
	second_diagonal_example.mark_board(4);
	second_diagonal_example.mark_board(2);
	second_diagonal_example.mark_board(7);
	second_diagonal_example.mark_board(8);
	second_diagonal_example.mark_board(10);
	second_diagonal_example.mark_board(9);
	second_diagonal_example.mark_board(13);
	REQUIRE(second_diagonal_example.game_over() == true);
}

TEST_CASE("Test for no winner for TicTacToe4")
{
	TicTacToe4 no_win_example;
	no_win_example.start_game("X");
	no_win_example.mark_board(1);
	no_win_example.mark_board(2);
	no_win_example.mark_board(3);
	no_win_example.mark_board(4);
	no_win_example.mark_board(5);
	no_win_example.mark_board(6);
	no_win_example.mark_board(7);
	no_win_example.mark_board(8);
	no_win_example.mark_board(9);
	no_win_example.mark_board(10);
	no_win_example.mark_board(11);
	no_win_example.mark_board(12);
	no_win_example.mark_board(14);
	no_win_example.mark_board(15);
	no_win_example.mark_board(16);
	no_win_example.mark_board(13);
	REQUIRE(no_win_example.game_over() == true);
}

