/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"

int CheckInp(int choice)
{
	bool invalid;

	invalid = false;

	do
	{
		cout << "Enter a command? ";

		if(!(cin >> choice))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between 0 and 6 ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    invalid = true;
		    DisplayMenu();
		}
		else if (choice <= -1 || choice >= 7)
		{
			cout << left;
			cout << endl;
			cout << "**** The number " << choice << setw(25) << " is an "
					"invalid entry" << "****\n";
			cout << "**** Please input a number between 0 and 6 ****\n\n";
			cout << right;

			invalid = true;
		    DisplayMenu();
		}

	}while(invalid);

	return choice;
}
