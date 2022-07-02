/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"
/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER 	: Programmer's Name
	 * CLASS 		: Student's Course
	 * SECTION 		: Class Days and Times
	 * LAB_NUM	 	: Lab Number (specific to this lab)
	 * LAB_NAME 	: Title of the Lab
	 *******************************************************************/
char CheckWin(const char boardAr[][NUM_COLS])
{
char token;

int row = 0;
token = ' ';

while(row < 3 && token == ' ')
{
	if(boardAr[row][0] ==  boardAr[row][1] && boardAr[row][1] == boardAr[row][2])
	{
		token = boardAr[row][0];
	}
	row++;
}
int col = 0;

while(col < 3 && token == ' ')
{
	if(boardAr[0][col] ==  boardAr[1][col] && boardAr[1][col] == boardAr[2][col])
	{
		token = boardAr[0][col];
	}
	col++;
}

if(boardAr[0][0] ==  boardAr[1][1] && boardAr[1][1] == boardAr[2][2])
{
	token = boardAr[0][0];
}
else if(boardAr[0][2] ==  boardAr[1][1] && boardAr[1][1] == boardAr[2][0])
{
	token = boardAr[0][0];
}




return token;
}


