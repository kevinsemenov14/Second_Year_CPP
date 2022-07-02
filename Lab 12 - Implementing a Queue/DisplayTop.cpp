/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
* FUNCTION DisplayTop
* -------------------------------------------------------------------------
* This function displays the top of the queue.
* -------------------------------------------------------------------------
* PRE-CONDITIONS
*	head	:	points to front node in queue
*
* POST-CONDITIONS
*  - returns a string of data to be output
**************************************************************************/
string DisplayTop (PersonNode *head) // IN - points to front node in queue
{
	ostringstream output;

	output << left
		   << setw(DISPLAY_COL) << "Name:"   << head -> name   << endl
		   << setw(DISPLAY_COL) << "Gender:" << head -> gender << endl
		   << setw(DISPLAY_COL) << "Age:"    << head -> age    << endl
		   << right;

	return output.str();
}
