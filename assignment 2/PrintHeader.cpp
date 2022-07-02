/*************************************************************************
 * AUTHOR     	   : demon
 * ASSIGNMENT #2   : parallel Arrays
 * CLASS      	   : CS1b
 * SECTION    	   : ThT: 8am
 * DUE DATE   	   : 2/9/2015
 ************************************************************************/
#include "Headerfile.h"

void printHeader(ostream &outFile)
{
	/*******************************************************************
	 * FUNCTION - PrintHeader
	 * __________________________________________________________________
	 * This function, with the below constants (i.e. programmer, class,
	 * section, lab num, and lab name) taken in, will output a class
	 * heading to the screen.
	 * - returns nothing -> outputs heading to screen.
	 */
	/*_______________________________________________________________
	 * PRE-CONDITIONS:
	 * 	PROGRAMMER: not previously defined
	 * 	CLASS	  : not previously defined
	 * 	SECTION   : not previously defined
	 * 	LAB_NUM   : not previously defined
	 * 	LAB_NAME  : not previously defined
	 * POST-CONDITIONS:
	 * 	The constants will be assigned accordingly so that the proper
	 * 	class heading will be displayed.
	 * ------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * ------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Time
	 * LAB_NUM    : Lab Number (specific to the lab)
	 * LAB_NAME   : Title of the Lab
	 ********************************************************************/
	const char PROGRAMMER[30]	="Demon";
	const char CLASS[5]			="CS1B";
	const char SECTION[25]		="ThT: 8:00p - 12:20p";
	const int LAB_NUM			= 2;
	const char LAB_NAME[17]		="Parallel Arrays";

	outFile << left;
	outFile << "*****************************************************";
	outFile << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	outFile << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	outFile << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	outFile << "\n*  ASSIGNMENT #" << setw(2) << LAB_NUM << ": " << LAB_NAME;
	outFile << "\n*****************************************************\n\n";
	outFile << right;

}
