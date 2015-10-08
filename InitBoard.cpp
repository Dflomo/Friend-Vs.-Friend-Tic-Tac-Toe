#include "headers.h"

/************************************************************************
 VOID FUNCTION - InitBoard
 _____________________________________________________________________
 Passes the two dimensional array 'board', then the entire array is
 intialized to blank spaces.
 _____________________________________________________________________
 PRE-CONDITIONS
		 board :		An multi-dimensional array of type char

 POST-CONDITIONS
		 There are no post conditions for this functions
*************************************************************************/

void InitBoard(char board[][COL_NUMS])
{
	for(int index = 0; index < COL_NUMS; index ++)
	{
		for(int innerIndex = 0; innerIndex < ROW_NUMS; innerIndex++)
		{
			board[innerIndex][index] = ' ';
		}
	}


}
