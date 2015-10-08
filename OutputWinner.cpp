#include "headers.h"

/****************************************************************
 VOID FUNCTION - OutputWinner
 _______________________________________________________________
 Passes the 'winner' variable of type char, which is
	 pre-evaluated to signify the winner of the round or to
	 signify a tie, and then outputs a message accordingly
 _______________________________________________________________
 PRE-CONDITIONS
		 winner  :		A predefined variable of type char
		 player1 :		A user defined variable of type string
		 player2 :		A user defined variable of type string

 POST-CONDITIONS
		 There are no post conditions for this functions
***************************************************************/

void OutputWinner(char winner, string player1, string player2)
{

	if(winner == 'X')
	{
		cout << player1 << " stands victorious over the battlefield!\n" << endl;
	}
	else if(winner == 'O')
	{
		cout << player2 << " stands victorious over the battlefield!\n" << endl;
	}
	else if(winner == 'T')
	{
		cout << "Tis an unfortunate event, \n";
		cout << "but both opponents were able to kill each other in combat!" << endl;
		cout << "Let this day will be marked by the death of both champions...\n" << endl;
	}
}
