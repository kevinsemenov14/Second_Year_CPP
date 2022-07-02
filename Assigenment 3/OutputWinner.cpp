/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"
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
void OutputWinner(char whoWon, string playerX, string playerO)
{
	if(whoWon == 'X')
	{
		cout <<  playerX << " wins the game!";
	}
	else if(whoWon == 'O')
	{
		cout <<  playerO << " wins the game!";
	}

}
