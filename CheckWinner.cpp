#include "headers.h"

/****************************************************************
 FUNCTION - CheckWinner
 _______________________________________________________________
 Passes in a constant Array 'board', and a predefined counter.
	 It then checks the two dimensional array for a winner, and
	 returns the changed variable of 'winner'
 _______________________________________________________________
 PRE-CONDITIONS
		 board  :	A two dimensional array of type const char
		 counter:	Signifies the amount of turns taken

 POST-CONDITIONS
		 winner :	A character symbol is returned accordingly
***************************************************************/
char CheckWinner(const char board[][COL_NUMS], int &counter)
{
	char winner = ' ';
	counter++;

	if(counter == 9)
	{
		winner = 'T';
		counter = 0;
	}

	//FOR - Checks all three rows for a winner
	for(int rows = 0; rows < ROW_NUMS; rows++)
	{
		//IF(Horizontal) - If three of the same symbols are evaluated for
		//	   a horizontal row, it then gives the variable 'winner' the
		//	   symbol of the first space used for comparison
		if(board[rows][0] != ' ' && board[rows][0] == board[rows][1] && board[rows][0] == board[rows][2])
		{
			winner = board[rows][0];
		}
	}

	//FOR - Checks all three columns for a winner
	for(int cols = 0; cols < COL_NUMS; cols++)
	{
		//IF(Vertical)- If three of the same symbols are evaluated for a
		//	   vertical column, it then gives the variable 'winner' the
		//	   symbol of the first space used for comparison
		if(board[0][cols] != ' ' && board[0][cols] == board[1][cols] && board[0][cols] == board[2][cols])
		{
			winner = board[0][cols];
		}
	}

	//IF(Diagonal) - If three of the same symbols are evaluated for a
	//	   diagonal, it then gives the variable 'winner' the symbol of the
	//	   first space used for comparison
	if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{
			winner = board[0][0];
	}
	else if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
	{
			winner = board[0][2];
	}

	return winner;
}

