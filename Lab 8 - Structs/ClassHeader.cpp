/*************************************************************************
 * AUTHOR        : Oxeford, Demon
 * Lab #8        : Structs
 * CLASS         : CS1B
 * SECTION       : TTh: 8am
 * DUE DATE      : 2/12/15
 ************************************************************************/

#include "headerfile.h"

/**************************************************************************
 * FUNCTION PrintHeaderStream
 *_________________________________________________________________________
 * This function receives a codeName, assignment name, student id,
 *  assignment type, and an assignment number then returns the appropriate
 *  header as a string.
 *_________________________________________________________________________
 * PRE-CONDITIONS (ALL MUST BE PREVIOUSLY DEFINED)
 *  codeName - users code name
 *  asName	 - assignment name
 *  studId	 - student id number
 *  asType	 - assignment type
 *  asNum    - assignment number
 *_________________________________________________________________________
 * POST-CONDITIONS
 * 	This function will return the class header as a string.
 *************************************************************************/

string ClassHeader(string codeName, //IN - Users code name
				   string asName,	//IN - Name of the assignment
				   char   asType,   //IN - code type (lab or assign)
				   short  asNum)	//IN - lab or assignment number

{
	ostringstream  output;
	output << left;
	output << "**************************************************\n";
	output << "* Programmed by : " << codeName;
    output << "\n* " << setw(14) << "Class" << ": CS1B --> TTh - 8a-11:50a";
	output << "\n*";

	//selection statement to choose between lab or assignment
	if(toupper(asType) == 'L')
	{
		output << " LAB #" << setw(9);
	}
	else
	{
		output << " ASSIGNMENT #" << setw(2);
	}

	output << asNum << ": " << asName;
	output << "\n**************************************************\n\n";
	output << right;

	return output.str();
}
