/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"
void GetAndCheckInp(char boardAr[][3], char token, string playerX, string playerO)
{
	int movecol;
	int moverow;
	bool invalid;


	invalid = false;
	do
	{
		cout << playerX << " what's your play?: ";
			cin >> moverow >> movecol;

			cout << endl << "Move row: " << moverow << endl;
			cout << endl << "Move col: " << movecol << endl;

		if(moverow > -1 && moverow <= 3 && moverow != boardAr[moverow][movecol])
		{
			invalid = true;
		}
		else
		{
			cout << "your row is invalid";
		}


		if(movecol > -1 && movecol <= 3 && movecol!= boardAr[moverow][movecol])
		{
			invalid = true;
		}
		else
		{
			 cout << "your col is invalid";
		}

	}while(invalid);













}
