/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : Supplement
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/9/15
 *************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

enum Days{ SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	NODay,
};
/*******************************************************************************
 * FUNCTION - PrintHeader
 * ______________________________________________________________________________
 * This function, with the below constants (i.e. programmer, class,
 * section, lab num, and lab name) taken in, will output a class
 * heading to the screen.
 * - returns nothing -> outputs heading to screen.
 ******************************************************************************/
void printHeader();

Days stringIntoDay( string inputDay);

string daysIntoString(Days today);

#endif /* MYHEADER_H_ */
