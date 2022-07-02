/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**********************************************************************
 * FUNCTION PrintHeader
 * --------------------------------------------------------------------
 * This function receives output method, programmer(s) name(s),
 * assignment name, type, and number then outputs the class heading
 * --------------------------------------------------------------------
 * PRE-CONDITIONS (previously defined)
 * 		output	  	: output method	  		- previously defined
 * 		programmers	: programmer(s) name(s)	- previously defined
 * 		assignName	: assignment name   	- previously defined
 * 		assignType	: assignment type   	- previously defined
 * 		assignNum 	: assignment number 	- previously defined
 *
 * POST-CONDITIONS
 * 		The function will output the class heading
 *********************************************************************/
void PrintHeader(ostream& 		output,	     // IN  - Output variable
				 string   		programmers, // IN  - Programmer(s) name(s)
				 string   		assignName,  // IN  - Assignment name
				 char     		assignType,  // IN  - Type of project
				 	 	 	 	 	         //       (lab or assignment)
				 unsigned short assignNum)   // IN  - Project number
{
	output << left;

	// SetFill - outputs a character to a specified width
	SetFill(output, '*', 57);

	output << "\n*  PROGRAMMED BY : " << programmers;
	output << "\n*  " << setw(14) << "CLASS"  << ": " << "CS1B";
	output << "\n*  " << setw(14) << "SECTION"  << ": "
	       << "TTh: 8:00 AM - 11:50 AM";
	output << "\n*  ";

	if(toupper (assignType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}

	output << assignNum << ": " << assignName << "\n";

	// SetFill - outputs a character to a specified width
	SetFill(output, '*', 57);

	output << "\n\n";
	output << right;
}
