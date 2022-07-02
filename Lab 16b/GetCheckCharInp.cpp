/**************************************************************************
 * AUTHOR     : Ikrit & DeBaggis
 * LAB #14    : Intro to OOP
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/02/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION GetCheckCharInp
 *_________________________________________________________________________
 *	This function receives the desired char input variable to return to,
 *	the prompt to ask the user for input, and the boundaries in order to
 *	error check for invalid character inputs
 *
 *	RETURNS valid char input
 *_________________________________________________________________________
 *************************************************************************/
char GetCheckCharInp(char         input, // IN & OUT   - Desired char variable
		             const string PROMPT,// OUT        - User input Prompt
		             const char   EITHER,// PROC & OUT - boundary
		             const char   OR)    // PROC & OUT - Boundary
{
	bool invalid;
	string inputString;

	cout << left;
	cout << PROMPT;
	do
	{
		invalid = false;

		cin.get(input);
		input = toupper(input);

		//Checks within range
		if(input != EITHER && input != OR)
		{
			cout << endl;
			cout << "**** " << input << " is an invalid entry ****\n";
			cout << "**** Please input " << EITHER
				 << " or " << OR << "   ****\n";

			cin.clear();
			cin.ignore(numeric_limits <streamsize> :: max(), '\n');
			cout << PROMPT;
			invalid = true;

		}
	}while(invalid);
	cin.ignore(numeric_limits <streamsize> :: max(), '\n');
	cout << right;

	return input;
}
