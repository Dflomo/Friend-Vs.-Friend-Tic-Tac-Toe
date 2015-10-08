#include "headers.h"

	/*********************************************************************
	* Multi-Dimensional Arrays(Epic Edition)
	*____________________________________________________________________
	*
	* In a land far, far away, two symbols were formed in a great forge.
	* 	An 'X' and an 'O' were made... Suddenly they both sprang to life.
	* 	These symbols quickly became aware of their surroundings and
	* 	instantly sensed the other's life force...
	*
	* Many years past, and many battles fought, these symbols still wage
	* 	war, in hopes of the death of the other.
	*
	* In this program, it is your duty as the user to input names of
	* 	both you and your opponent playing as either army, then
	* 	sequentially you shall take turns moving your armies onto a 3x3
	* 	TICTACTOE Board.
	*
	* Finally, this program will check the board that you have whittled
	* 	with war, and see which army has won the battle. It will then
	* 	Output a winning message for the champion who survives, or for
	* 	both tieing champions.
	*____________________________________________________________________
	*
	* CONSTANTS
	* 		ROW_NUMS		: Dictates the number of rows in the array
	* 		COL_NUMS		: Dictates the number of columns in the array
	*
	* INPUTS
	* 		exitGame		: User chooses to play the game after instruct
	*
	**********************************************************************/
int main()
{
	char exitGame;						//INPUT - User chooses to play the
										// 		  the game or exit
	char board[ROW_NUMS][COL_NUMS];		//IN 	- Array of type char
	string player1;						//INPUT - user defines name of
										//        player1
	string player2;						//INPUT - user defines name of
										// 		  player2
	char token = 'X';					//IN	- Char variable, init
										//		  to 'X'
	char winner = ' ';					//IN	- Char variable, init
										// 		  to blank space
	bool continueGame;					//INPUT	- User chooses to cont
										//		  a game
	int counter = 0;					//IN	- counter up to 9 plays

	//VOID FUNCTION - Outputs Document Headers
	PrintHeaders();
	//VOID FUNCTION - Outputs the themed instructions for TicTacToe
	OutputInstruct();


	//DO - Error check for incorrect input (must be 'Y' or 'N')
	do
	{
		cout << "Having read your instruction scroll, do you still wish to play [y/n]?";
		cin.get(exitGame);
		cin.ignore(1000,'\n');
		exitGame = tolower(exitGame);

		//IF - If exitGame becomes either 'n' or 'y' it will skip the
		//	   error message, and continue to evaluate, it will then
		//	   force the DO loop check to exit
		if(exitGame != 'n' && exitGame != 'y')
		{
			cout << "You must choose a \'y\' or an \'n\' champion!\n";
			cout << "Do you still wish to play [y/n]?";
			cin.get(exitGame);
			cin.ignore(1000,'\n');
			exitGame = tolower(exitGame);
		}
		else if(exitGame == 'n')
		{
			continueGame = false;
			cout << "You have made a cowardly decision Champion... but, you'll be back..." << endl;
		}
		else if(exitGame == 'y')
		{
			continueGame = true;
		}

	}while(exitGame != 'n' && exitGame != 'y');
	//DO - EXIT


	//WHILE - While the User wants to continue the game
	while(continueGame)
	{
		winner = ' ';		//Re-Initialize Winner to nothing
		token = 'X';		//Re-Initialize Token to X


		//VOID FUNCTION - The user inputs player1 and player2, which are
		//				  assigned to 'X' and 'O'
		GetPlayers(player1, player2);

		//FUNCTION - Initializes the board to blank spaces
		InitBoard (board);

		//FUNCTION - First Display of the board for the user
		DisplayBoard(board);
		cout << "BEHOLD! The Field of Fallen Champions!\n";
		cout << "HOLDFAST! THE BATTLE IS ABOUT TO BEGIN!\n\n\n";


		//WHILE - Continues to loop until winner evaluates to either
		//		  'X', 'O' or 'T'
		while(winner != 'X' && winner != 'O' && winner != 'T')
		{
			//VOID FUNCTION - Prompts a user for input and checks validity
			GetAndCheckInp(board, token, player1, player2);

			//VOID FUNCTION - Displays the board to the user
			DisplayBoard(board);

			//FUNCTION - Switchs the token every turn
			token = SwitchToken(token);

			//FUNCTION - Checks the board every turn for a winner
			winner = CheckWinner(board, counter);

			//FUNCTION - If a winner is found or if it is a tie, a message
			//			 is displayed
			OutputWinner(winner, player1, player2);
		}

		//DO - Error check for incorrect input (must be 'Y' or 'N')
		do
		{
				cout << "Dare you test your skill again Champion [y/n]?";
				cin.get(exitGame);
				cin.ignore(1000,'\n');
				exitGame = tolower(exitGame);

				//IF - If exitGame becomes either 'n' or 'y' it will skip the
				//	   error message, and continue to evaluate, it will then
				//	   force the DO loop check to exit
				if(exitGame != 'n' && exitGame != 'y')
				{
					cout << "You must choose a \'y\' or an \'n\' champion!\n";
					cout << "Do you still wish to play [y/n]?";
					cin.get(exitGame);
					cin.ignore(1000,'\n');
					exitGame = tolower(exitGame);
				}
				else if(exitGame == 'n')
				{
					continueGame = false;
					cout << "You have made a cowardly decision Champion... but, you'll be back..." << endl;
				}
				else if(exitGame == 'y')
				{
					continueGame = true;
					counter = 0;				//Re-Initialize counter to 0
				}

		}while(exitGame != 'n' && exitGame != 'y');
			//DO - EXIT

	} //END WHILE

	return 0;
}



