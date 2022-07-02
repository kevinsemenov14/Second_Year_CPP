/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION DisplayMenu
 * ------------------------------------------------------------------------
 * This function displays the menu of options as follows:
 * 	1 - ENQUEUE (Add a person)
 * 	2 - DEQUEUE (Remove a person)
 * 	3 - ISEMPTY (Is the queue empty?)
 * 	4 - FRONT   (Who is in front?)
 * 	5 - SIZE    (How many people are there?)
 * 	6 - Display Queue
 * 	7 - Clear the Queue
 * 	0 - Exit
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		none
 *
 * POST-CONDITIONS
 *  - returns nothing, only displays the options menu
 **************************************************************************/
void DisplayMenu()
{
	cout << "QUEUE MENU:\n"
		 << setw(MENU_COL) << "1 - ENQUEUE (Add a person)\n"
		 <<	setw(MENU_COL) << "2 - DEQUEUE (Remove a person)\n"
		 << setw(MENU_COL) << "3 - ISEMPTY (Is the queue empty?)\n"
		 << setw(MENU_COL) << "4 - FRONT   (Who is in front?)\n"
		 << setw(MENU_COL) << "5 - SIZE    (How many people are there?)\n"
		 	 	 	 	   << "6 - Display Queue\n"
		                   << "7 - Clear the Queue\n"
		                   << "0 - to Exit\n";
}
