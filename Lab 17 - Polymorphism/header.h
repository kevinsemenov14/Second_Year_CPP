/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>
#include <ios>
#include <sstream>
#include "Animal.h"
#include "Sheep.h"
#include "Pig.h"
#include "AnimalList.h"
using namespace std;



// GLOBAL CONSTANTS
const string         PROGRAMMER	 =	"Azaryia & DatOwl";
const string         CLASS       = 	"CS1B";
const string         SECTION     =  "T/Th 8am";
const string         AS_NAME     = 	"Arrays & Linked Lists of Sheep";
const char	         AS_TYPE     = 	'L';
const unsigned short AS_NUM	     = 	15;
const int   		 COL_WIDTH   =  12;


// ENUM DECLARATION
enum Menu
{
	ADD,
	REMOVE,
	FRONT,
	FIND,
	SIZE,
	DISPLAY,
	CLEAR,
	EXIT
};



// STRUCT DECLARATION




// FUNCTION DECLARATIONS
/**************************************************************************
* FUNCTION GetAndCheckIntInp
*__________________________________________________________________________
*
* This function prompts the user a prompt and receives integer input.
* It will error check the input and check if it is within boundaries.
* It will return the valid integer input.
**************************************************************************/


int GetAndCheckIntInp( string prompt,        // IN - prompt for user
					   int    min,           // IN - minimum boundary
				       int    max);          // IN - maximum boundary

/**************************************************************************
* FUNCTION TableHeader
*__________________________________________________________________________
*
* This function prints to the console a table header.
**************************************************************************/
void TableHeader(string sheepName, 		   // IN - Sheep name
				 short sheepAge);		   // IN - Sheep age

/*************************************************************************
 *  FUNCTION PrintHeaderStream
 * 		This function will output the header, including the names of the
 * 		programmers, class and assignment information.
 * 		- returns: the class header as a string stream
 ************************************************************************/
string PrintHeaderStream(const string PROGRAMMER,// IN - name of programmer
					     const string CLASS,	 // IN - class abbreviation
					     const string SECTION,	 // IN - class day/time
					     const string AS_NAME,   // IN - name of assign
					     const char   AS_TYPE,   // IN - assign or lab
					     const int    AS_NUM);	 // IN - assign or lab #

void FindAndChangeAge(string &animalName, short &aniAge);

char GetAndCheckChar(char charOne, char charTwo, const string PROMPT);

#endif /* HEADER_H_ */
