/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : Supplement
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/9/15
 *************************************************************************/
#include "MyHeader.h"
string daysIntoString(Days today)
{

	string outputDay;

	switch(today)

	{
	case SUNDAY:outputDay = "SUNDAY";
	break;

	case MONDAY:outputDay = "MONDAY";
	break;

	case TUESDAY:outputDay = "TUESDAY";
	break;

	case WEDNESDAY:outputDay = "WEDNESDAY";
	break;

	case THURSDAY:outputDay = "THURSDAY";
	break;

	case FRIDAY:outputDay = "FRIDAY";
	break;

	case SATURDAY:outputDay = "SATURDAY";
	break;

	default: cout << "**** Invalid day input! ****";
	cout << "Today is INVALID!";
	}


return outputDay;
}
