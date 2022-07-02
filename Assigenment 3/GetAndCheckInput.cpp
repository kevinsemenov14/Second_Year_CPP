/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"
/*******************************************************************
 * GetAndCheckInp
 * __________________________________________________________________
 * This function, will pass in the token of the game with the name of
 * 				  player one and player two. then check for there input
 * 				  of the move they wish to make.
 * __________________________________________________________________
 * inputs   	  char token
 * 		  		  string nameX
 * 		   		  string nameO
 * 		  		  char BoardAr
 * __________________________________________________________________
 * Outputs		  the move of the player.
 * __________________________________________________________________
 *
 ********************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS], char token, string nameX, string nameO)
{
	int col;
	int row;

	bool invalid;
	invalid = true;
	string player;
	bool invalidrow;
	bool invalidcol;

	if(token == 'X')
	{
		player = nameX;

	}
	else
	{
		player = nameO;

	}

	do{

		cout << player << " what's your play?: ";

		if(!(cin >> row >> col))
		{
			cout << "\nPlease input an integer (1-3) ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    invalid = true; }
		else if (row >= 1 && row >= 3 && col >= 1 &&  col <= 3)
		{
			cout << row << " " << col;
			cout << " what's your play?:";

			invalid = true;
		}
		cout << endl;
		row--;
		col--;

		invalidrow = row < 0 || row > 2;
		invalidcol = col <0 || col > 2;



		if (invalidrow && invalidcol)
		{
			cout << "invalid row or col. \n \n";
		}
		else if( invalidcol)
		{
			cout << "invalid col. \n \n";
		}
		else if(invalidrow)
		{
			cout << "invalid row. \n \n";
		}
		else if(boardAr[row][col] != ' ')
		{
			cout << "that spot is taken please try agian. \n \n";
		}
		else
		{
			invalid = false;
		}
	}while(invalid);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	boardAr[row][col] = token;


}
