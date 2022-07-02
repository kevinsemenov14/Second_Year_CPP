/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION OutputHeader
 *_________________________________________________________________________
 *	This function Outputs the header portion of the table for list output
 *_________________________________________________________________________
 *************************************************************************/
string OutputHeader()
{
	const char DASH = '-';
	ostringstream out;

	// Column Headers
	out << left;
	out << endl << setw(15) << "NAME" << "AGE\n";
	out << FillLine(14, DASH) << ' ' << FillLine(3, DASH) << endl;
	out << right;

	return out.str();
}
