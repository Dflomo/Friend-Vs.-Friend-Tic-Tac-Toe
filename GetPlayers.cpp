#include "headers.h"

/****************************************************************
 VOID FUNCTION - GetPlayers
 _______________________________________________________________
 Passes in variables player1 and player of type string by ref
 and asks the user to define them
 _______________________________________________________________
 PRE-CONDITIONS
		player1 :	Variable of type string, will receive the first
				:	player's name
		player2 :	Variable of type string, will receive the second
				:	player's name

 POST-CONDITIONS
		 There are no post conditions for this functions
***************************************************************/

void GetPlayers(string &player1, string &player2)
{
	cout << "\n\nWho dares choose the Merciless Army of the X\'s? ";
	getline(cin, player1);

	cout << "Who will be noble enough to take arms with the O\'s? ";
	getline(cin, player2);

}
