/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"
/*******************************************************************
 * GetPlayers
 * __________________________________________________________________
 * This function, will get both players names as string chars and then
 * 				  returns both players names back to main.
 * __________________________________________________________________
 *
 ********************************************************************/
void GetPlayers(string &nameX, string &nameO)
{
	string player1;
	string player2;
	char token;

	cout << " player one please enter your name ";
	getline(cin,player1);
	cout << endl;

	cout << " player two please enter your name ";
	getline(cin,player2);
	cout << endl;
	cout << player1 << " would you like to be X or O ";
	cin.get(token);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	token = toupper(token);

	if(token == 'X')
	{
		nameX = player1;
		nameO = player2;
	}
	else
	{
		nameX = player2;
		nameO = player1;
	}

	cout << nameX << " you are player X. \n";
	cout << endl;

	cout << nameO << " you are player O. \n";
	cout << endl;

	cout << nameX << " will start the game as X!";

	cout << endl;

}
