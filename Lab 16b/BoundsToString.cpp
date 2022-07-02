/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION BoundsToString
 *_________________________________________________________________________
 *	This function receives integer boundary values and converts the
 *	whole error message into a string, ready to easily be formatted
 *	as desired.
 *
 *	RETURNS message as string
 *_________________________________________________________________________
 *************************************************************************/
string BoundsToString(const int LOW_BOUND,  // IN & OUT - Low boundary
		              const int HIGH_BOUND) // IN & OUT - High boundary
{
	ostringstream output;

	output << "\n**** Please enter a number "
		   << "between " << LOW_BOUND
		   << " and "   << HIGH_BOUND;

	return output.str();
}
