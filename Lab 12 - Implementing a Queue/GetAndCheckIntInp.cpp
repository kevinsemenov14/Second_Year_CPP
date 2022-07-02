/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**************************************************************************
 * FUNCTION GetAndCheckIntInp
 * ------------------------------------------------------------------------
 * This function prompts the user a prompt and receives integer input.
 * It will error check the input and check if it is within boundaries.
 * It will return the valid integer input.
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	prompt   : prompt has to be previously defined
 * 	MIN      : minimum has to be previously defined
 * 	MAX      : maximum has to be previously defined
 *
 * POST-CONDITIONS
 * RETURNS: returns the valid integer input
 **************************************************************************/
int GetAndCheckIntInp(string    prompt, // IN - prompt for user
					  const int MIN,    // IN - minimum boundary
				      const int MAX)    // IN - maximum boundary
{
	long long input;		// IN & PROC  - input value (accounts for
							//              unexpected input length)
	bool invalid;			// PROC	      - T/F if input is invalid or not
	ostringstream error;	// PROC & OUT - ostringstream for error message
	int errorLength;		// PROC & OUT - length for error message


	do
	{
		invalid = false;

		cout << left;

		cout << setw(PROMPT_COL) << prompt;
		if(!(cin >> input))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\n**** Please input a NUMBER between " << MIN
				 << " and " << MAX
				 << " ****\n\n";
			invalid = true;

			// DisplayMenu - displays option menu
			DisplayMenu();
		}
		else
		{
			invalid = (input < MIN || input > MAX);

			if(invalid)
			{

				error << "The number " << input << " is an invalid entry";
				errorLength = error.str().length();

				if(errorLength < MIN_ERROR_LEN)
				{
					errorLength = (MIN_ERROR_LEN - errorLength) + errorLength;
				}


				cout << "\n**** " << setw(errorLength) << error.str()
					 << " ****\n";


				// PROCESSING - clears ostringstream variable for reuse
				error.str("");

				error << "Please input a number between " << MIN << " and "
					  << MAX;

				cout << "**** "
					 << setw(errorLength)
					 << error.str()
					 << " ****" ;

				// PROCESSING - clears ostringstream variable for reuse
				error.str("");

				cout << endl << endl;

				// DisplayMenu - displays option menu
				DisplayMenu();

			}
		}

	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << right;

	return int(input);
}
