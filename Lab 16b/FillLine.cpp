/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION FillLine
 *_________________________________________________________________________
 *	This function receives line length and the filler.
 *	It will then simply fill the line with the desired filler.
 *
 *	RETURNS line filler as string
 *_________________________________________________________________________
 *************************************************************************/
string FillLine(const int LINE_LENGTH, // IN & PROC - Desired line length
			    char filler)           // IN & OUT  - Filler character
{
	ostringstream out;
	out << setfill(filler) << setw(LINE_LENGTH) << filler;
	return out.str();
}
