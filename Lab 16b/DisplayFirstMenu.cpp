/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION DisplayFirstMenu
 *_________________________________________________________________________
 *	This function displays the MENU OPTIONS
 *	for the program using ostringstream
 *
 *	RETURNS Menu as a string
 *_________________________________________________________________________
 *************************************************************************/
string DisplayFirstMenu()
{
	ostringstream output;

	output << "FARM MENU:\n"
		   << FillLine(22, '-') << endl
		   << "1 - Initialize Animals\n"
		   << "0 - EXIT\n"
		   << "Enter Selection: ";

	return output.str();
}
