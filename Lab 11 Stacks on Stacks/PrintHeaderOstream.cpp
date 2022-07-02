/***********************************************************************
 * AUTHOR		 : Deboogaloo &
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"

/************************************************************************
 * FUNCTION PrintHeaderOstream
 *______________________________________________________________________
 * This function receives an assignment name, type, number, and output
 * variable, then outputs the appropriate header - returns nothing.
 *______________________________________________________________________
 * PRE-CONDITIONS
 * 		PROGRAMMER : Name of programmer has to be previously defined
 * 		ID         : ID number has to be previously defined
 * 		CLASS      : Class name has to be previously defined
 * 		SECTION	   : Section has to be previously defined
 * 		AS_NAME    : Assignment Name has to be previously defined
 * 		AS_TYPE	   : Assignment Type has to be previously defined
 * 		AS_NUM	   : Assignment Number has to be previously defined
 * 		output	   : The output variable to be used (cout or oFile)
 *
 * POST-CONDITIONS
 * 		This function will output the class heading.
 ***********************************************************************/
void PrintHeaderOstream(const string PROGRAMMER, // IN - programmer name
				 	 	const int ID,			 // IN - id number
				 	 	const string CLASS,	  	 // IN - name of the class
				 	 	const string SECTION,    // IN - class time
				 	 	const string AS_NAME, 	 // IN - assignment Name
				 	 	const char AS_TYPE,   	 // IN - assignment type
				 	 	const int AS_NUM,		 // IN - assignment number
				 	 	ostream &output)		 // IN - output variable
{
	output << left;
	output << "**************************************************\n";
	output << "* PROGRAMMED BY : " << PROGRAMMER;

	if (ID != 0)
	{
		output << "\n* " << setw(14) << "STUDENT ID" << ": " << ID;
	}

	output << "\n* " << setw(14) << "CLASS" << ": " << CLASS << " --> "
	     << SECTION;

	output << "\n* " ;
	if (toupper(AS_TYPE) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}

	output << AS_NUM << ": " << AS_NAME;
	output << "\n**************************************************\n\n";
	output << right;
}
