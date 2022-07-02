/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION DisplayQueue
 * ------------------------------------------------------------------------
 * This function displays the queue.
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	head	:	points to top node in queue
 *
 * POST-CONDITIONS
 *  - returns a formatted string containing all elements of the queue
 **************************************************************************/
/**************************************************************************
 * CONSTANTS
 * ------------------------------------------------------------------------
 * USED FOR FORMATTING
 * ------------------------------------------------------------------------
 * NAME_COL		:	set length for name column
 * GEN_COL		:	set length for gender column
 * GEN_VAL_COL	:	set length for gender value column
 * AGE_VAL_COL	:	set length for age value column
 **************************************************************************/
string DisplayQueue(PersonNode *head) // IN - points to 1st node of linked
									  //      list
{
	const short NAME_COL    = 25;
	const short GEN_COL     = 10;
	const short GEN_VAL_COL = 4;
	const short AGE_VAL_COL = 9;

	ostringstream output;	// PROC & OUT - ostringstream for table
	PersonNode *personPtr;	// PROC		  - temporary person pointer

	personPtr = new PersonNode;
	personPtr = head;

	output << left;
	output << setw(NAME_COL) << "NAME"
	 	   << setw(GEN_COL)  << "GENDER"
	 	   << "AGE\n";
	output << setw(NAME_COL) << "----"
		   << setw(GEN_COL)  << "------"
		   << "---\n";

	while(personPtr != NULL)
	{
		output << left;
		output << setw(NAME_COL) << personPtr -> name;
		output << right;
		output << setw(GEN_VAL_COL)  << personPtr -> gender;
		output << setw(AGE_VAL_COL) << personPtr -> age << endl;
		personPtr = personPtr -> next;
	}

	delete personPtr;
	personPtr = NULL;

	return output.str();
}
