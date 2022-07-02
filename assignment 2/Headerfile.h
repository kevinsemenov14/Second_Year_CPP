/*************************************************************************
 * AUTHOR     	   : demon
 * ASSIGNMENT #2   : parallel Arrays
 * CLASS      	   : CS1b
 * SECTION    	   : ThT: 8am
 * DUE DATE   	   : 2/9/2015
 ************************************************************************/
#ifndef HEADERFILE_H_
#define HEADERFILE_H_


#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <ostream>
using namespace std;
/*******************************************************************
	 * FUNCTION - PrintHeader
	 * __________________________________________________________________
	 * This function, with the below constants (i.e. programmer, class,
	 * section, lab num, and lab name) taken in, will output a class
	 * heading to the screen.
	 * - returns nothing -> outputs heading to screen.
	 ****************************************************************/
void printHeader(ostream &outFile);

void inPutFunction(string arName[],
					int arId[],
					float arBal[],
					const int AR_SIZE);

int Search( string searchName,string arName[],const int AR_SIZE);

#endif /* HEADERFILE_H_ */
