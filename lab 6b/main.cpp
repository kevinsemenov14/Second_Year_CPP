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
	cout << "What day is today ";
	cin >> inputDay;

	today = stringIntoDay(inputDay);

while(today!= NODay)
{

	outputDay = daysIntoString(today);

	cout << "Today is " << outputDay << "!";
	cout << endl << endl;

	cout << "What day is today ";
		cin >> inputDay;
		today = stringIntoDay(inputDay);
}









	return 0;
}
