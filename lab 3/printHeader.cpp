/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#include "myheader.h"
/*******************************************************************
 * FUNCTION - PrintHeader
 * __________________________________________________________________
 * This function, with the below constants (i.e. programmer, class,
 * section, lab num, and lab name) taken in, will output a class
 * heading to the screen.
 * - returns nothing -> outputs heading to screen.
 * __________________________________________________________________
 * PRE-CONDITIONS:
 * 	PROGRAMMER: not previously defined
 * 	CLASS	  : not previously defined
 * 	SECTION   : not previously defined
 * 	LAB_NUM   : not previously defined
 * 	LAB_NAME  : not previously defined
 * POST-CONDITIONS:
 * 	The constants will be assigned accordingly so that the proper
 * 	class heading will be displayed.
 * ------------------------------------------------------------------
 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
 * ------------------------------------------------------------------
 * PROGRAMMER : Programmer's Name
 * CLASS      : Student's Course
 * SECTION    : Class Days and Time
 * LAB_NUM    : Lab Number (specific to the lab)
 * LAB_NAME   : Title of the Lab
 ********************************************************************/
void printHeader()
{
	const char PROGRAMMER[30] = "Demon & Marcellus";
	const char CLASS[5]       = "CS1B";
	const char SECTION[25]    = "MW: 8am";
	const int  LAB_NUM        = 3;
	const char LAB_NAME[25]   = "Supplement: Coin Flip";

	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  ASSIGNMENT #" << setw(2) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

}
