/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION InputFunction
 * ------------------------------------------------------------------------
 *	This function gets the input specified by the program and returns it
 *	to the Push function
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	personPtr	:	pointer pointing to the current node
 *
 * POST-CONDITIONS
 *	- returns nothing, loads a struct with data
 **************************************************************************/
void InputFunction(PersonNode *&personPtr)// IN & OUT - points to node
{
	personPtr->name   = GetString("Enter Name:");
	personPtr->gender = GetAndCheckCharInput ("Enter Gender:",'M','F');
	personPtr->age    = GetAndCheckIntInp("Enter Age:", 0, 150);
}
