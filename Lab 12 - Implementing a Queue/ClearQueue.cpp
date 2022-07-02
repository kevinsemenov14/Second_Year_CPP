/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION ClearQueue
 * ------------------------------------------------------------------------
 * This function clears all elements from the queue
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	head	:	points to top node in queue
 *	tail	:	points to last node in queue
 *
 * POST-CONDITIONS
 *  - returns new head and tail values by reference
 **************************************************************************/
void ClearQueue(PersonNode *&head, // IN - head of linked list
	     	    PersonNode *&tail) // IN - tail of linked list
{
	// PROCESSING - loops until the head pointer is NULL
	while(head != NULL)
	{
		Dequeue(head, tail);
	}
}
