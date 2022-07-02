/************************************************************************
 * AUTHOR     : Blue & Demon
 * LAB #5     : Intro to OOP
 * CLASS      : CS1B
 * SECTION    : T/Th 8:00AM
 * DUE DATE   : 3/31/15
 ************************************************************************/

#include "header.h"
#include "Animal.h"

/*************************************************************************
 * Intro to OOP
 * _______________________________________________________________________
 * This program will create a class of sheep and intialize three instances
 * 	of that class. It will then allow the user to change the age or value
 * 	of the class or display what is currently stored in each object.
 * _______________________________________________________________________
 * INPUT:
 *		 	inFile			: input file to be read
 * OUTPUT:
 *		 	outFile	 	   	: output file to be written to
 *
 * **********************************************************************/

int main()
{
	string inFileName;	//IN -> user's selected inFile

	//OUTPUT - Outputs Header
	PrintHeader ("Blue & Demon", "Intro to OOP", 'L', 13);

	OutputMainMenu();

	return 0;
}
