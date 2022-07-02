/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/*************************************************************************
 * FUNCTION Enqueue
 * -----------------------------------------------------------------------
 * This function adds an element to the tail of the queue.
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 		tail	:	tail of the linked list
 *
 * POST-CONDITIONS:
 * 		Returns the new head and tail values by reference
 ************************************************************************/
void Enqueue(PersonNode *&head, // IN - head of the linked list
			 PersonNode *&tail) // IN - tail of the linked list
{
	PersonNode *personPtr;	// PROC - temporary person pointer


	personPtr = new PersonNode;


	if(IsEmpty(head))
	{
		personPtr -> next = NULL;
		InputFunction(personPtr);
		tail = personPtr;
		head = personPtr;
	}
	else
	{
		InputFunction(personPtr);
		tail -> next = personPtr;
		tail = personPtr;
		personPtr -> next = NULL;

	}


	personPtr = NULL;

}



