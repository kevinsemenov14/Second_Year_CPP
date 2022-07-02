/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION Dequeue
 * ------------------------------------------------------------------------
 * This function removes the element at the top of the queue
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	head	:	points to top node in queue
 *	tail	:	points to last node in queue
 *
 * POST-CONDITIONS
 *  - returns new head and tail values by reference
 **************************************************************************/
void Dequeue(PersonNode *&head, // IN - head of linked list
		     PersonNode *&tail) // IN - tail of linked list
{
	PersonNode *personPtr;	// PROC - temporary person pointer

	personPtr = head;

	personPtr = head -> next;
	delete head;
	head = personPtr;

	personPtr = NULL;

}
