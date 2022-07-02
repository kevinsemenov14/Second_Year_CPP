/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/

#include "header.h"

/**************************************************************************
* FUNCTION GetAndCheckIntInp
*__________________________________________________________________________
*
* This function prompts the user a prompt and receives integer input.
* It will error check the input and check if it is within boundaries.
* It will return the valid integer input.
*
*__________________________________________________________________________
* PRE-CONDITIONS
* 	prompt   : prompt has to be previously defined
* 	intInp   : intInp has to be previously defined (passed by reference)
* 	min      : minimum has to be previously defined
* 	max      : maximum has to be previously defined
*
* POST-CONDITIONS
* RETURNS: returns the valid integer input
*
**************************************************************************/

int GetAndCheckIntInp( string prompt,        // IN - prompt for user
					   int    min,           // IN - minimum boundary
				       int    max)           // IN - maximum boundary
{
	int            input;
	bool           invalid;
	ostringstream  error1;
	ostringstream  error2;
	unsigned short error1Length;
	unsigned short error2Length;
	unsigned short newSetWLength;


	do
	{
		error1.str("");
		invalid = false;

		cout << left;

		cout << prompt;
		if(!(cin >> input))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			error1 << "**** Please input a number between "
				   << min << " and " << max << ' ';

			cout << endl
			     << setw(newSetWLength)
				 << error1.str()
				 << "****"
				 << endl;

			error1.str("");

			invalid = true;
		}
		else
		{
			invalid = input < min || input > max;

			if(invalid)
			{

				error1 << "**** The number " << input
				       << " is an invalid entry ";
				error1Length = error1.str().length();

				error2 << "**** Please input a number between "
									   << min << " and " << max << ' ';
				error2Length = error2.str().length();

				if (error1Length > error2Length)
				{
					newSetWLength = error1Length;
				}
				else
				{
					newSetWLength = error2Length;
				}

				cout << endl
					 << setw(newSetWLength) << error1.str()  << "****\n";

				error1.str("");



				cout << setw(newSetWLength)
					 << error2.str()
					 << "****"
					 << endl;

				error2.str("");

			}
		}

	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << right;

	return input;
}
