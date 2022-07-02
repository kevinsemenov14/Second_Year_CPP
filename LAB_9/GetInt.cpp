/***********************************************************************
 * AUTHOR		: BEAK & Demon
 * LAB #9		: Testing
 * CLASS		: CS1B
 * SECTION		: TTh 0800
 * DUE DATE		: 19FEB2015
 ***********************************************************************/
#include "LAB9_HEADER.h"
/*************************************************************************
 * FUNCTION GetInt
 *________________________________________________________________________
 * This function gets an integer with a lower limit
 *________________________________________________________________________
 * PRE-CONDITIONS
 * 		prompt		: The string prompt
 * 		lower		: The lower limit as a int
 *
 * POST-CONDITIONS
 * 		returns the valid integer input.
 *************************************************************************/
int GetInt(string prompt,	//IN - prompt
		   int lower)		//IN - lower limit of valid range
{
	int integer;
	bool invalid;

	do
	{
		cout << prompt;

		if(!(cin >> integer))
		{
			cout << "*** Please input a positive integer! *** \n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(integer < lower)
		{
			cout << "*** Please input a positive integer! *** \n";
			invalid = true;
		}
		else
		{
			invalid = false;
		}
	}while(invalid);

	return integer;
}
