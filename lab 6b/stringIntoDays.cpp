/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : Supplement
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/9/15
 *************************************************************************/
#include "MyHeader.h"
string inputDay;
Days today;
Days stringIntoDay( string inputDay)
		{

	switch (toupper(inputDay[0]))
	{
	case 'S': if (toupper(inputDay[1])=='A')
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
	case 'T': if (toupper(inputDay[1])=='U')
	{
		today = TUESDAY;
	}
	else
	{
		today = THURSDAY;
	}
		break;
	case 'F': today = FRIDAY;
	break;

	default: today = NODay;
		cout << "**** Invalid day input! ****";
	cout << endl  << endl << "Today is INVALID!";
	}

	return today;
		}
