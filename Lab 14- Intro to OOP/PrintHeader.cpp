/************************************************************************
 * AUTHOR     : Blue & Demon
 * LAB #5     : Intro to OOP
 * CLASS      : CS1B
 * SECTION    : T/Th 8:00AM
 * DUE DATE   : 3/31/15
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *	FUNCTION PrintHeader
 * ________________________________________________________________________
 * This function receives the user's name, an assignment name, type and
 * 	number, then outputs the appropriate header - returns nothing.
 * ________________________________________________________________________
 * PRE-CONDITIONS:
 * 			myName		: user's name
 *		 	asName		: assignment name has to be previously defined
 *		 	asType		: assignment type has to be previously defined
 *		 	asNum		: assignment number has to be previously defined
 * POST-CONDITIONS:
 * 		This function will output the class heading.
 *
 * **********************************************************************/

void PrintHeader(string myNameF, // IN - user's name
				 string asNameF, // IN - assignment name
				 char   asTypeF, // IN - assignment type
				 	 	 	 	 //			(LAB or ASSIGNMENT)
				 int    asNumF)  // IN - assignment number
{
	//OUTPUT - Class Heading
	cout << left;
	cout << setfill('*') << setw(52) << "*";
	cout << setfill(' ');
	cout << "\n* " << setw(14)   << "PROGRAMMED BY" << ": "   << myNameF;
	cout << "\n* " << setw(14)   << "CLASS"         << ": CS1B";
	cout << "\n* " << setw(14)   << "SECTION"       << ": T/Th 8:00AM";
	cout << "\n* ";

	if (toupper(asTypeF) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}

	cout << asNumF << ": " << asNameF << setfill('*') << setw(52) << endl
		 << "*" << endl << setfill(' ');
	cout << right;
}
