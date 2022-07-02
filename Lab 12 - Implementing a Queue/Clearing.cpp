/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION Clearing
 * ------------------------------------------------------------------------
 *	This function outputs the elements being cleared from the queue.
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		head	:	pointer to element at front of queue
 *
 * POST-CONDITIONS
 *		Returns nothing. Outputs the elements being cleared.
 **************************************************************************/
void Clearing(PersonNode *head)	// IN - pointer to element at front of queue
{
	PersonNode *personPtr;	// PROC & OUT - temporary person pointer

	personPtr = head;

	cout << "CLEARING...\n";

	while(personPtr != NULL)
	{
		cout << personPtr -> name << endl;
		personPtr = personPtr -> next;
	}

	cout << endl;

	personPtr = NULL;
}
