/***************************************************************
 * AUTHOR			: User & Demon
 * Lab #7			: Binary Search
 * CLASS			: CS1B
 * SECTION			: TTh: 8am - 11:55am
 * Due Date			: 2/12/2015
 ***************************************************************/
#include "header.h"

/*******************************************************************
 * FUNCTION -InsertionSort
 * __________________________________________________________________
 * This function, sorts all the arraying from less numbers to greater than
 * numbers.
 *
 ********************************************************************/
void InsertionSort(const int AR_SIZE, int intArray[])
{
	int temp;
	int larger;

	for(int index= 1; index < AR_SIZE; ++index)
	{
		temp = intArray[index];
		larger = index -1;
		while(larger >= 0 && intArray[larger] > temp)
		{
			intArray[larger +1] = intArray[larger];
			larger = larger - 1;
		}
		intArray[larger + 1] = temp;
	}
}
