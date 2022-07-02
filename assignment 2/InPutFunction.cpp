/*************************************************************************
 * AUTHOR     	   : demon
 * ASSIGNMENT #2   : parallel Arrays
 * CLASS      	   : CS1b
 * SECTION    	   : ThT: 8am
 * DUE DATE   	   : 2/9/2015
 ************************************************************************/
#include "Headerfile.h"
/*******************************************************************
	 * FUNCTION -  inPutFunction
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

void inPutFunction(string arName[],
				  int arId[],
				  float arBal[],
				  const int AR_SIZE)
{
	int index;

	ifstream inFile;
	inFile.open("inFile.txt");

	for(index=0;index < AR_SIZE;index++)
	{
		getline(inFile,arName[index]);

		inFile >> arId[index];

		inFile >> arBal[index];
		inFile.ignore(1000, '\n');

	}

	inFile.close();



}


