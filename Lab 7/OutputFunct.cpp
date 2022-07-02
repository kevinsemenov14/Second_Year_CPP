/***************************************************************
 * AUTHOR			: User & Demon
 * Lab #7			: Binary Search
 * CLASS			: CS1B
 * SECTION			: TTh: 8am - 11:55am
 * Due Date			: 2/12/2015
 ***************************************************************/

#include "header.h"
/*******************************************************************
 * FUNCTION - OutputFunct
 * __________________________________________________________________
 * This function, outputs the index and the numbers in the order they were
 * assassined.
 ********************************************************************/
void OutputFunct(const int AR_SIZE, int intArray[])
{
	for(int count = 0; count < AR_SIZE; count++)
		{
			cout << "Index #" << count << ": " << intArray[count];
			cout << endl;
		}
		cout << endl << endl;
}
