/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION IntToString
 *_________________________________________________________________________
 *	This function gets an integer input and converts it to a string
 *
 *	RETURNS integer as a string
 *_________________________________________________________________________
 *************************************************************************/
string IntToString(const int NUMBER) // IN & OUT - Integer to be converted
{
	ostringstream output;

	output << NUMBER;

	return output.str();
}
