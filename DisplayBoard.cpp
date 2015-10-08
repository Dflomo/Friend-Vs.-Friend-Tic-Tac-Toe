#include "headers.h"

/****************************************************************
 VOID FUNCTION - DisplayBoard
 _______________________________________________________________
 Passes in the two dimensional array 'board', and outputs to the
	 user a visual representation of the playing board
 _______________________________________________________________
 PRE-CONDITIONS
		 board :	A two dimensional array of type char

 POST-CONDITIONS
		 There are no post conditions for this functions
***************************************************************/

void DisplayBoard(const char board[][COL_NUMS])
{
	system ("cls");
	int columns;
	int rows;

	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
	for (columns = 0; columns < 3; columns++)
	{
		cout << setw(7) << "[" << columns + 1 << "][1] | " << "[" << columns + 1;
		cout << "][2] | " << "[" << columns + 1 << "][3]" << endl;
		cout << setw(14) <<  "|" << setw(9) << "|" << endl;

		for (rows = 0; rows < 3; rows++)
		{
			switch(rows)
			{
			case 0:	cout << columns + 1 << setw(9) << board [columns][rows];
					cout << setw(4) << "|";
					break;

			case 1:	cout << setw(4) << board[columns][rows];
					cout << setw(5) << "|";
					break;

			case 2:	cout << setw(4) << board[columns][rows] << endl;
					break;

			default: cout << "ERROR!\n\n";

			}
		}
		cout << setw(14) << "|" << setw(10) << "|\n";

		if (columns != 2)
		{
			cout << setw(32) << "  -------------------------------\n";
		}
	}
	cout << endl << endl;
}
