/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION Size
 * ------------------------------------------------------------------------
 * This function determines the size of a stack.
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	head	:	points to top node in stack
 *
 * POST-CONDITIONS
 *  - returns a integer value representing the number of nodes in a stack
 **************************************************************************/
unsigned int Size(PersonNode *head) // IN - points to first node of linked list
{
	PersonNode    *personPtr;	// PROC       - temporary person pointer
	unsigned short nodeCount;	// PROC & OUT - counter of nodes in queue

	personPtr = new PersonNode;
	personPtr = head;
	nodeCount = 0;

	while (personPtr != NULL)
	{
		nodeCount++;
		personPtr = personPtr -> next;
	}


	delete personPtr;
	personPtr = NULL;

	return nodeCount;
}
