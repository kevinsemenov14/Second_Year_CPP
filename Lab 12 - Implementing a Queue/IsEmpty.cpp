/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
* FUNCTION IsEmpty
*--------------------------------------------------------------------------
* This function determines if the stack is empty or not
*--------------------------------------------------------------------------
* PRE-CONDITIONS
*	head	:	points to top node in stack
*
* POST-CONDITIONS
*  - returns boolean value
**************************************************************************/
bool IsEmpty(PersonNode *head) //IN - points to 1st node of linked list
{
	return head == NULL;
}
