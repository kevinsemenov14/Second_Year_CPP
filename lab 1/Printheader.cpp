/*************************************************************************
 * AUTHOR     	  : Demon
 * STUDENT ID 	  : 1000566
 * Lab 1          : CS1A Review
 * CLASS      	  : CS1B
 * SECTION    	  : TTh: 8am
 * DUE DATE   	  : 1/27/2015
 ************************************************************************/
#include "myheader.h"

void printHeader()
{
	/*******************************************************************
	* ------------------------------------------------------------------
	* USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	* ------------------------------------------------------------------
	* PROGRAMMER : Programmer's Name
	* CLASS      : Student's Course
	* SECTION    : Class Days and Time
	* LAB_NUM    : Lab Number (specific to the lab)
	* LAB_NAME   : Title of the Lab
	********************************************************************/
	const char PROGRAMMER[30] = "Demon";
	const char CLASS[5]       = "CS1B";
	const char SECTION[25]    = "MW: 8am";
	const int  LAB_NUM        = 1;
	const char LAB_NAME[25]   = "CS1A Review";

	cout << left;
	cout << "*****************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  ASSIGNMENT #" << setw(2) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*****************************************************\n\n";
	cout << right;

}
