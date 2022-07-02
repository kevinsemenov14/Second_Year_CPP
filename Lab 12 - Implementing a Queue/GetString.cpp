/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/*************************************************************************
 * 	FUNCTION GetString
 * -----------------------------------------------------------------------
 *  This function will accept a string as input and error
 * 	check it to ensure is a valid response.
 * 	- returns a valid string response received as input
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		PROMPT			: prompt for getting string response.
 *
 * POST-CONDITIONS:
 *		stringToReturn 	: string returned to main after it is error
 *				 	  	  checked.
 *************************************************************************/
string GetString(const string STRING_PROMPT)// IN - prompt for string input
{
	string stringToReturn;	// OUT  - input file name to be returned
	bool   isEmpty;			// PROC - boolean to check if input is empty


	stringToReturn.clear();
	// PROCESSING - initializes boolean noInput to false until otherwise
	//				proven true
	isEmpty = false;

	cout << left;

	// PROCESSING - runs while input is invalid
	do
	{

		// INPUT - prompts user to input string
		cout << setw(PROMPT_COL) <<  STRING_PROMPT;
		getline(cin, stringToReturn);


		// PROCESSING - outputs message that nothing has been input
		if(stringToReturn.empty())
		{
			cout << "**** ERROR **** -- INVALID INPUT!\n"
				 << "Nothing has been input!\n\n";
			isEmpty = true;
		}

	}while(isEmpty);

	cout << right;

	return stringToReturn;
}
