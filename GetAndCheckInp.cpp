#include "headers.h"

/****************************************************************
 VOID FUNCTION - GetAndCheckInp
 _______________________________________________________________
 Passes a two dimensional array, a token and two player names.
	 Depending on the token value, it will take in an input from
	 the appropriate player, it will then check the input and
	 output an error message if the number was to biug or if
	 that space is already taken.
 _______________________________________________________________
 PRE-CONDITIONS
		board  : 	A two dimensional array of type char
		token  : 	A variable of type char
		player1:	A user defined variable of type string
		player2:	A user defined variable of type string

 POST-CONDITIONS
		 There are no post conditions for this functions
***************************************************************/

void GetAndCheckInp(char board[][COL_NUMS], char token, string player1,
		string player2)
{
	bool valid = false;
	int rows = 0;
	int columns = 0;

	//DO - Checks for a valid input
	do
	{
		//IF - Token equals 'X' it is equivalent to player1's turn
		//ELSE - It will be player2's turn
		if(token == 'X')
		{
			cout << player1 << " The Bloodthirsty\'s turn! Where shall you move:";
			cin >> rows >> columns;
			rows--;
			columns--;
		}
		else
		{
			cout << player2 << " The Pure\'s turn! Where shall you move:";
			cin >> rows >> columns;
			rows--;
			columns--;
		}

		//IF - Checks to see if row, and col is withing range of the array
		//	   and check to see if the space is taken
		if(rows > ROW_NUMS - 1 || rows < 0)
		{
			cout << endl << "FOOL! The first number is much too big, please try again!\n" << endl;
		}
		else if(columns > COL_NUMS - 1 || columns < 0)
		{
			cout << endl << "FOOL! The second number is much too big, please try again!\n" << endl;
		}
		else if(board[rows][columns] != ' ')
		{
			cout << endl << "A bold and daring... \n";
			cout << "But FOOLISH move champion, someone holds that ground already! Please try again!\n" << endl;
		}
		else
		{
			valid = true;
		}
	}while(!valid);

	board[rows][columns] = token;
	cin.ignore(1000, '\n');
}

