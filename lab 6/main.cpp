/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : Supplement
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/9/15
 *************************************************************************/
#include "MyHeader.h"

/***********************************************************************
 *  Lab #6 - Supplement: tic tac toe
 ***********************************************************************/
int main()
{
	printHeader();
	string inputDay;
	string outputDay;

	Days today;
	cout << "What day is today";
	cin >> inputDay;

	switch (toupper(inputDay[0]))
			{
	case 'S': if (toupper(inputDay[1])=='a')
	{
		today = SATURDAY;
	}
	else
	{
		today = SUNDAY;
	}
	break;

	case 'M': today = MONDAY;
	break;

	case 'W': today = WEDNESDAY;
	break;
	case 'T': if (toupper(inputDay[1])=='u')
	{
		today = TUESDAY;
	}
	else
	{
		today = THURSDAY;
	}

	default: cout << "**** Invalid day input! ****";
				cout << endl << "Today is INVALID!";
			}






	switch(today)
	{
	case SUNDAY:outputDay = "Sunday";
	break;

	case MONDAY:outputDay = "Monday";
	break;

	case TUESDAY:outputDay = "Tuesday";
	break;

	case WEDNESDAY:outputDay = "Wednesday";
	break;

	case THURSDAY:outputDay = "Thursday";
	break;

	case FRIDAY:outputDay = "Friday";
	break;

	case SATURDAY:outputDay = "Saturday";
	break;

	default: cout << "**** Invalid day input! ****";
	cout << "Today is INVALID!";
	}



	cout << "Today is " << outputDay;










	return 0;
}
