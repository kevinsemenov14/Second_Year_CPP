
#include "MyHeader.h"

/********************************************************************
 * MOVIE LIST
 * __________________________________________________________________
 * This program will read in the details of a movie, including:
 * 		Title
 * 		Lead Actor/Actress
 * 		Supporting Actor/Actress
 * 		Genre
 * 		Alternative Genre
 * 		Year
 * 		Rating
 * 		Synopsis
 * and save it into a linked list, and will output them all to an output
 * file
 *
 * __________________________________________________________________
 * INPUT:
 * 	From User:
 * 		inFileName : name of the input file, specified by user
 *	From File:
 *		all in struct:
 *			title		: Title of a DVD
 *			leadAct		: Leading Actor in movie
 *			supportAct	: Supporting actor in movie
 *			genre		: Genre of the movie
 *			altGenre	: Alternate genre
 *			year		: Year the movie was released
 *			rating		: Rating out of 10
 *			synopsis	: Generalization of the movie
 *
 *
 * OUTPUT:
 *	All of the inputs to an output file
 *********************************************************************/
int main( )
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER		: Programmer's Name
	 * ID				: Programmer's ID
	 * CLASS			: Student's Course
	 * SECTION			: Class Days and Times
	 * ASSIGNMENT_NAME	: Title of the Assignment
	 * ASSIGNMENT_TYPE  : Either 'L' for Lab or 'A' for Assignment
	 * ASSIGNMENT_NUM	: Assignment Number (specific to this assignment)
	 * -----------------------------------------------------------------
	 *******************************************************************/
	const string PROGRAMMER		 = "Deboogaloo";
	const int    ID				 = 0;
	const string CLASS		     = "CS1B";
	const string SECTION		 = "TTH - 8am";
	const string AS_NAME 		 = "Movie List";
	const char 	 AS_TYPE 		 = 'A';
	const int	 AS_NUM	 		 = 4;


	DvDRec *head;		// CALC - Ptr for the beginning of the linked list
	string inFileName;	// IN	- User defined title of input file


	ofstream oFile;		// Ouput file variable
	oFile.open("outFile.txt");


	// Pint header function (to console)
	PrintHeaderOstream(PROGRAMMER,   // IN - programmer name
					   ID,			 // IN - id number (0 to omit)
					   CLASS,	  	 // IN - name of the class
					   SECTION,      // IN - class time
				       AS_NAME, 	 // IN - assignment Name
					   AS_TYPE,   	 // IN - assignment type
					   AS_NUM,		 // IN - assignment number
					   cout);		 // IN - output variable


	// Print header function (to output file)
	PrintHeaderOstream(PROGRAMMER,   // IN - programmer name
					   ID,			 // IN - id number (0 to omit)
					   CLASS,	  	 // IN - name of the class
					   SECTION,      // IN - class time
				       AS_NAME, 	 // IN - assignment Name
					   AS_TYPE,   	 // IN - assignment type
					   AS_NUM,		 // IN - assignment number
					   oFile);		 // IN - output variable


	// Gets user input for the input file name
	cout << "What input file would you like to use? ";
	getline(cin, inFileName);
//	inFileName = "InputFile.txt";

	// Creates the linked list
	head = InFromFile(inFileName);
	// Outputs the linked list
	OutputList(head, oFile);

	oFile.close();

	return 0;
}
