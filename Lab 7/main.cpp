/***************************************************************
 * AUTHOR			: User & Demon
 * Lab #7			: Binary Search
 * CLASS			: CS1B
 * SECTION			: TTh: 8am - 11:55am
 * Due Date			: 2/12/2015
 ***************************************************************/
#include "header.h"

/**************************************************************
 *
 * Binary Search
 *_____________________________________________________________
 * This game will prompt each player for their name then will
 * prompts them to where on which row or column they want to place
 * there token.
 *_____________________________________________________________
 *INPUT:
 *		playerX: name of player one
 *		playerO: name of player two
 *
 *OUTPUT:
 *
 **************************************************************/
int main()
{

	const int AR_SIZE = 8;
	int index;
	int counter;
	int intSearch;
	int intArray[AR_SIZE]= {4,1,7,12,8,13,9,21};

	printHeader(); // printes header

	OutputFunct(AR_SIZE,intArray);// outputs the numbers in order of the
	array

	for(counter = 0; counter < 4; counter++) // asking user for search index
	{
		cout <<"Enter an integer to search for: ";
		cin >> intSearch;
		index = SequeutialSearch(AR_SIZE, intArray, intSearch);
		if(index < AR_SIZE)
		{
			cout <<"The interger " << intSearch << " was found in index #";
			cout << index << ".\n\n";
		}
		else
		{
			cout << intSearch << " was not found!\n\n";
		}
	}


	cout << "\nPerforming Insertion Sort!\n\n";

	InsertionSort(AR_SIZE, intArray);// searchs the index of the array

	OutputFunct(AR_SIZE,intArray);// outputs the numbers in order of the
	array

	// asking user four times for there search input
	for(counter = 0; counter < 4; counter++)
	{
		cout <<"Enter an integer to search for: ";
		cin >> intSearch;
		index = BinarySearch(AR_SIZE, intArray, intSearch);
		if( index < AR_SIZE)
		{
			cout <<"The interger " << intSearch << " was found in index #";
			cout << index << ".\n\n";
		}
		else
		{
			cout << intSearch << " was not found!\n\n";
		}
	}


}







