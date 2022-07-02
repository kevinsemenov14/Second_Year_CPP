/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"

int main()
{
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
	char boardAr[NUM_ROWS][NUM_COLS];
	string nameO;
	string nameX;
	char token;


	printHeader();

	InitBoard(boardAr);

	GetPlayers(nameX,nameO);




	GetAndCheckInp(boardAr,token,nameX,nameO);


	DisplayBoard(boardAr);



	return 0;
}
