/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"
/*******************************************************************
 * InitBoard
 * __________________________________________________________________
 * This function, will force all rows and cols of boardAr into spaces,
 * 				  to all it to be clear for a new game.
 * __________________________________________________________________
 *
 ********************************************************************/
void InitBoard(char boardAr[][NUM_COLS])
{
	int rowCnt;
	int colCnt;
	for (rowCnt = 0; rowCnt < NUM_ROWS; rowCnt++)
	{
	for (colCnt = 0; colCnt < NUM_COLS; colCnt++)
	{
		boardAr[rowCnt][colCnt]=' ';
	}
	}
}
