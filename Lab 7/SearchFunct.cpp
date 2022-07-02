/***************************************************************
 * AUTHOR			: User & Demon
 * Lab #7			: Binary Search
 * CLASS			: CS1B
 * SECTION			: TTh: 8am - 11:55am
 * Due Date			: 2/12/2015
 ***************************************************************/
#include "header.h"


/*******************************************************************
 * FUNCTION - BinarySearch
 * _________________________________________________________________
 * This function, searchs the index number of the users input.
 * returns the index of the number found.
 * This function uses a while loop by replacing the top and bottom looking
 *      for the key as the mid number
 ********************************************************************/
int BinarySearch( const int AR_SIZE, int intArray[], int intSearch)
{
	bool found;

	found = false;
	int bottom;
	int top;
	int mid;
	int index;
	index = AR_SIZE;
	bottom = 0;
	top = AR_SIZE - 1;

	while(!found && bottom <= top)
	{
		mid = (bottom+top)/2;
		if(intArray[mid] == intSearch)
		{
			found = true;
			index = mid;
		}
		else if (intArray[mid] < intSearch)
		{
			bottom = mid + 1;
		}
		else
		{
			top = mid - 1;
		}

	}
	return index;
}


/*******************************************************************
 * FUNCTION - SequeutialSearch
 * _________________________________________________________________
 * This function, searchs the index number of the users input.
 * returns the index of the number found.
 *
 ********************************************************************/
int SequeutialSearch( const int AR_SIZE, int intArray[], int intSearch)
{
	int index;
	bool found;

	index = 0;

	while(!found  && index < AR_SIZE)
	{
		if(intArray[index] == intSearch)
		{
			found = true;
		}
		else
		{
			index++;
		}
	}

	return index;
}
