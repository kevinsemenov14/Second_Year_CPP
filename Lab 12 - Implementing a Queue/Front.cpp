/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION Front
 *-------------------------------------------------------------------------
 * This function lets the user view the data item at the top of the queue.
 *-------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	head	:	points to top node in stack
 *
 * POST-CONDITIONS
 *  - returns element at top of the queue
 **************************************************************************/
string Front(PersonNode *head) //IN - points to 1st node of linked list
{
	ostringstream output;	// PROC & OUT - ostringstream for output

	if(!IsEmpty(head))
	{
		output << DisplayTop(head);
	}

	return output.str();
}
