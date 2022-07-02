/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "MyHeader.h"

/**************************************************************************
 * FUNCTION DisplayMenu
 *_________________________________________________________________________
 *	This function displays the MENU OPTIONS
 *	for the program using ostringstream
 *
 *	RETURNS Menu as a string
 *_________________________________________________________________________
 *************************************************************************/
string DisplayMenu()
{
	ostringstream output;

	output << "FARM MENU\n"
		   << FillLine(22, '-') << endl
		   << "1 - Re-Initialize Sheep\n"
		   << "2 - Re-Initialize Pigs\n"
		   << "3 - Change Age\n"
		   << "4 - Display\n"
		   << "0 - EXIT\n"
		   << "Enter a command: ";

	return output.str();
}
