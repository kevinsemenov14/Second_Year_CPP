/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/


#include "header.h"

// Checks the input from the user, for either a Y or an N
char GetAndCheckCharResponse()

{
	const int PROMPT_W  = 14;	// Prompt width
	char charAns;
	bool validIn;


	do
	{
		cout << left;
		cout << setw(PROMPT_W) << "Enter gender: ";
		cin.get(charAns);
		charAns = toupper(charAns);
		cin.ignore(100, '\n');

		validIn = charAns == 'F' ||
				  charAns == 'M';

		if(!validIn)
		{
			cout << endl
				 << "** INVALID INPUT - Please enter a 'f' or a 'm' **"
				 << endl << endl;
		}

	}while(!validIn);

	cout << right;


	return charAns;
}
