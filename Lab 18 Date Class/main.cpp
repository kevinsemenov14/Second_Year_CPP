/******************************************************
*  PROGRAMMED BY : Demon & Fireduck
*  CLASS         : CS1B
*  SECTION       : T/Th 8am
*  LAB #18       : Date Class
******************************************************/

#include "header.h"



int main()
{
	/**********************************************************************
	 * 								CONSTANTS
	 * ___________________________________________________________________
	 * The following constants are used for prompting the user for input.
	 * ___________________________________________________________________
	 *		GREETING	:	greets the user with a welcome message
	 *		MENU		:	displays a menu of choices for the user to
	 *					:	choose from.
	 *********************************************************************/
	const string GREETING = "\n**************************************\n"
							"* WELCOME TO THE ANIMAL LIST MANAGER *\n"
							"**************************************\n";
	const string MENU     = " 1 - Set Date     \n"
						    " 2 - Get Date     \n"
		                    " 3 - Get Day      \n"
						    " 4 - Get Month    \n"
						    " 5 - Get year     \n"
		                    " 6 - Display Date \n"
						    " 0 - Exit         \n";



	const string PROMPT_CHAR = "What is your menu choice? ";



	// VARIABLE DECLARATIONS
	Date testDay;
	int intInput;
	unsigned short day;
	unsigned short month;
	unsigned short year;


	// PRINT HEADER TO CONSOLE
	cout << PrintHeaderStream(PROGRAMMER, CLASS, SECTION,
							  AS_NAME, AS_TYPE, AS_NUM);

	// OUTPUTS WELCOME MESSAGE


	// VARIABLE INITIALIZATION

		cout << GREETING;
		cout << MENU;
		intInput	= GetAndCheckIntInp(PROMPT_CHAR, 0, 6);

while(intInput != 0)
{
switch (intInput)
		{
			case 1: day   = GetAndCheckIntInp("What day is it? ", 1, 31);
					month = GetAndCheckIntInp("What month is it? ", 1, 12);
					year  = GetAndCheckIntInp("What year is it? ", 1000,
																   3000);

					testDay.SetDate(month, day, year);
					cout << "The Date stamp has been altered";
				break;

			case 2: testDay.GetDate(month, day, year);
					cout << "The day is:   " << day << endl;
					cout << "The Month is: " << month << endl;
					cout << "The Year is:  " << year;
				break;

			case 3: day = testDay.GetDay();
					cout << "The day is: " << day;
				break;

			case 4: month = testDay.GetMonth();
					cout << "The Month is: " << month;
				break;

			case 5: year = testDay.GetYear();
					cout << "The Year is: " << year;
				break;

			case 6: cout << testDay.DisplayDate();
				break;

			case 0: cout << "error occured";
				break;
		}

	cout << endl << endl;
	cout << MENU;
	intInput = GetAndCheckIntInp(PROMPT_CHAR, 0, 6);

}

	return 0;
}

