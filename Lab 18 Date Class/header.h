/******************************************************
*  PROGRAMMED BY : Demon & Fireduck
*  CLASS         : CS1B
*  SECTION       : T/Th 8am
*  LAB #18       : Date Class
******************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include "Date.h"
#include <iomanip>
using namespace std;



// GLOBAL CONSTANTS
const string         PROGRAMMER	 =	"Demon & Fireduck";
const string         CLASS       = 	"CS1B";
const string         SECTION     =  "T/Th 8am";
const string         AS_NAME     = 	"Date Class";
const char	         AS_TYPE     = 	'L';
const unsigned short AS_NUM	     = 	18;
const int   		 COL_WIDTH   =  12;


// ENUM DECLARATION




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


char GetAndCheckChar(char charOne, char charTwo, const string PROMPT);

#endif /* HEADER_H_ */
