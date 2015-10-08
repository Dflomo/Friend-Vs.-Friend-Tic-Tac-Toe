#ifndef HEADERS_H_
#define HEADERS_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

const int ROW_NUMS = 3;
const int COL_NUMS = 3;

/*************************************************************************
 * PrintHeaders
 * This function outputs the appropriate class headings. It has inputs of
 * three literals, including the name of the assignment, the assignment
 * type of 'A' or 'L', and the assignment number of any integer.
 *
 * RETURNS: nothing
 * 		Displays the appropriate class headers
 *************************************************************************/
void PrintHeaders(string asName,
				  char asType,
				  int asNum);


/*************************************************************************
* OutputInstruct
* This function outputs instructions to the users. There are no input
* or output parameters for this function as it only displays text to
* the screen.
*
* RETURNS: nothing
*  Displays the instructions to the user
************************************************************************/
void OutputInstruct();

/*************************************************************************
* InitBoard
* This function initializes each spot in the board to a space ' '.
*
* RETURNS: Board initialized with all spaces
************************************************************************/
void InitBoard(char board[][COL_NUMS]);

/************************************************************************
* DisplayBoard
* This function outputs the tic tac toe board including the tokens
* played in the proper format (as described below).
*
* 		1 		2 		3
* 	[1][1] | [1][2] | [1][3]
* 		   |        |
* 1 	   | 		|
* 		   | 		|
* 	--------------------------
* 	[2][1] | [2][2] | [2][3]
* 		   | 		|
* 2 	   |		|
* 		   | 		|
* 	--------------------------
* 	[3][1] | [3][2] | [3][3]
* 		   | 		|
* 3 	   | 		|
* 		   |		|
*
* RETURNS: nothing
* outputs the current state of the board
************************************************************************/
void DisplayBoard(const char board [][COL_NUMS]);

/******************************************************************************
* GetPlayers
* This function prompts the user and gets the input for the players’ names.
* player1 will always contain the name of the player that is using the X token.
* player2 will always contain the name of the player that is using the O token.
*
* RETURNS: the players names through the variables player1 and player2.
*****************************************************************************/
void GetPlayers(string &player1,		//IN&OUT - name of player 1
				string &player2);		//IN&OUT - name of player 2

/******************************************************************************
* GetAndCheckInp
* This function prompts the user for a two number combination, which
* 	will act as coordinates for their respective marker. It then validates
* 	their entries and checks to see if the input is in the array's range,
* 	and whether or not that space has been taken.
*
* RETURNS: the players names through the variables player1 and player2.
*****************************************************************************/
void GetAndCheckInp(char board[][COL_NUMS], //IN - Two-D Array of type char
					char token,				//IN - Variable of type char
                    string player1,         //IN - A user defined name
					string player2);		//IN - A user defined name

/******************************************************************************
* SwitchToken
* This function switches the active player.
* It takes in a parameter representing the current player's token
* as a character value (either an X or an O) and returns the opposite.
* For example, if this function receives an X it returns an 0. If it
* receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
*****************************************************************************/
char SwitchToken(char token);

/******************************************************************************
* CheckWin
* This function checks to see if either player has run. It should be run
* after each player makes a play.
*
* RETURNS the character value of the player that won or a value that
* indicates a tie.
*****************************************************************************/
char CheckWinner(const char board[][COL_NUMS],
				 int &counter);

/******************************************************************************
* OutputWinner
* This function receives as input a character indicating which player won
* or if the game was a tie and outputs an appropriate message. This function
* does not return anything as it simply outputs the appropriate message to
* the screen.
*
* RETURNS: nothing
* Displays the winner’s name
*****************************************************************************/
void OutputWinner(char winner,
				  string player1,
				  string player2);

#endif
