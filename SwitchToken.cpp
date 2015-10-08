#include "headers.h"

/****************************************************************
 FUNCTION - SwitchToken
 _______________________________________________________________
 Passes a preset variable named 'token', and switchs the letter
	 value between 'X' and 'O'.
 _______________________________________________________________
 PRE-CONDITIONS
		 token :	A variable of type char containing either an
			   :	'X' or an 'O'

 POST-CONDITIONS
		 token :	Token is changed then returned to main

***************************************************************/

char SwitchToken(char token)
{
	if(token == 'X')
	{
		token = 'O';
	}
	else
	{
		token = 'X';
	}
	return token;
}
