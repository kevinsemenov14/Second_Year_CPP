/***********************************************************************
 * AUTHOR		: BEAK & Demon
 * LAB #9		: Testing
 * CLASS		: CS1B
 * SECTION		: TTh 0800
 * DUE DATE		: 19FEB2015
 ***********************************************************************/
#ifndef LAB8_HEADER_H_
#define LAB8_HEADER_H_

//Preprocessor directives go here
#include <iostream>		//for cin/cout
#include <iomanip>		//for IO manipulators
#include <string>		//for strings
#include <cstdlib>		//for system("cls")
#include <time.h>		//for random values
#include <cstdlib>		//for screen clearing
#include <limits>		//limits
#include <ios>			//streamsize
using namespace std;

//Global Constants
//User Defined Types
struct customersRec{
	string name;		//Customer name
	int    accountNum;	//customer account number
	float  balance;		//customer account balance
};

//Function Prototypes
/*************************************************************************
 * PrintHeaderString
 * 	This function receives an ostream variable, assignment name, type,
 * 	number, and programmers name. The function then returns the
 * 	appropriate header via reference through the ostream variable.
 * 	- returns nothing
 *************************************************************************/
void PrintHeaderOstream(ostream &output,	// OUT - output stream
						string  assName,	// IN - Assignment Name
						char    assType,	// IN - assignment Type
			 	 	 						//     (Lab or Assignment)
						string  assNum,		// IN - assignment number
						string  progName);	// IN - Programmers Name

/*************************************************************************
 * GetInt
 * 	This function gets an integer with a lower limit
  *************************************************************************/
int GetInt(string prompt,	//IN - prompt
		   int lower);		//IN - lower limit of valid range

/*************************************************************************
 * findBarsPerSheep
 * 	This function returns the integer of the bars per sheep
 *************************************************************************/
int findBarsPerSheep(int numSheep, 		//IN - Number of sheep
		 	 	 	 int numBars,		//IN - Number of chocolate bars
		 	 	 	 const int maxBars); //IN - maximum bars a sheep can eat

/*************************************************************************
 * findLeftOver
 * 	This function returns the integer of the left over bars.
 *************************************************************************/
int findLeftOver(int numSheep, 		//IN - Number of sheep
		 	 	 int numBars,		//IN - Number of chocolate bars
		 	 	 const int maxBars); //IN - maximum bars a sheep can eat

/*************************************************************************
 * OutputResults
 * 	outputs the results to the screen
 *************************************************************************/
void OutputResults(int barsPerSheep,	//IN - bars per sheep
		    	   int extraBars);		//IN - extra bars









#endif /* LAB8_HEADER_H_ */
