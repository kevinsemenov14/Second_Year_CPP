/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/*************************************************************************
 * 	FUNCTION GetAndCheckCharInput
 * -----------------------------------------------------------------------
 *  This function will accept a single character as input and error
 * 	check it to ensure is is a valid gender response.
 * 	- returns a valid single character response received as input
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		PROMPT		: prompt for getting character response.
 *
 * POST-CONDITIONS:
 *		checkChar 	: single character returned to main after it is error
 *				 	  checked.
 *************************************************************************/
char GetAndCheckCharInput (const string PROMPT,// IN - response prompt
						   char validChar1,	   // IN - valid char response
						   char validChar2)    // IN - valid char response
{
	bool invalidInput; 	// PROC 	- checks if input is valid or not
	char charCheck;		// IN & OUT - Gender: M/F


	invalidInput = (charCheck != validChar1 && charCheck != validChar2);

	cout << left;

	// PROCESSING - executes code while input is invalid (invalidInput)
	do // while (invalidInput)
	{
		// INPUT - prompts user to enter input (gender)
		cout  << setw(PROMPT_COL) << PROMPT;
		cin.get(charCheck);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		charCheck = toupper(charCheck);

		invalidInput = (charCheck != validChar1 && charCheck != validChar2);

		if (invalidInput)
		{
			cout << "\n**** Please enter valid character response (either "
				 << validChar1 << " or " << validChar2 << ") ****\n\n";
		}

	}while(invalidInput);

	cout << right;

	return charCheck;
}
