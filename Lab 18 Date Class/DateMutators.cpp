/******************************************************
*  PROGRAMMED BY : Demon & Fireduck
*  CLASS         : CS1B
*  SECTION       : T/Th 8am
*  LAB #18       : Date Class
******************************************************/

#include "Date.h"

/*************************************************************************
 * Method SetDate: Class Date
 *------------------------------------------------------------------------
 *   This method checks the month day and year if its valid and then stores
 *   it into day , month , and year
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month
 *  day
 *  year
 *
 *  POST-CONDITIONS:
 *    This method will set the date
 *************************************************************************/
void Date :: SetDate(unsigned short month,
		             unsigned short day,
			         unsigned short year)
{

	if(   ValidateMonth(month)
	   && ValidateYear(year)
	   && ValidateDay( month, day, year)
	   && ValidateDate(month, day ,year))
		{
			dateDay   = day;
			dateMonth = month;
			dateYear  = year;
		}
}

