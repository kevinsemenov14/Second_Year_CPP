/*************************************************************************
 * AUTHOR     	   : demon
 * ASSIGNMENT #2   : parallel Arrays
 * CLASS      	   : CS1b
 * SECTION    	   : ThT: 8am
 * DUE DATE   	   : 2/9/2015
 ************************************************************************/
#include "Headerfile.h"
/*******************************************************************
	 * FUNCTION -  Search
	 * __________________________________________________________________
	 * This function,
     *_________________________________________________________
	 * PRE-CONDITIONS:
	 *
	 * POST-CONDITIONS:
	 *
	 * ------------------------------------------------------------------
	 * USED FOR
	 * ------------------------------------------------------------------
	 *
	 ********************************************************************/
int Search( string searchName,string arName[],const int AR_SIZE)
{

	int index;


	index = 0;


		while(index < AR_SIZE && searchName != arName[index])
		{
			index++;

		}
		if(index != AR_SIZE)
		{
			cout << "found." << endl;
			cout << endl;

		}
		else
		{
			cout << searchName <<" was not found.";
			cout << endl << endl;
		}


	return index;
}


