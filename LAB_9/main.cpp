/***********************************************************************
 * AUTHOR		: BEAK & Demon
 * LAB #9		: Testing
 * CLASS		: CS1B
 * SECTION		: TTh 0800
 * DUE DATE		: 19FEB2015
 ***********************************************************************/
#include "LAB9_HEADER.h"
/***********************************************************************
 * LAB #9 - Testing
 * _____________________________________________________________________
 *
 * _____________________________________________________________________
 * INPUTS:
 * 		xxx				: xxx
 *
 * OUTPUTS:
 * 		xxx[]			: xxx
 ***********************************************************************/

int main()
{
/************************************************************************
 * CONSTANTS
 * -----------------------------------------------------------------
 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
 * -----------------------------------------------------------------
 * ASS_TYPE		: assignment type (lab or assignment) 'L' or 'A'
 * ASS_NUM		: Assignment Number
 * ASS_NAME		: Title of the Assignment
 * PROG_NAME	: The name of the programmers
 ************************************************************************/
	const string ASS_NAME	= "Testing";
	const char   ASS_TYPE	= 'l';
	const string ASS_NUM	= "9";
	const string PROG_NAME  = "BEAK & Demon";
	const int    MAX_BARS   = 4;
	const int	 MIN_SHEEP  = 1;
	const int    MIN_BARS   = 0;

	int numSheep;		//IN  - number of sheep
	int numBars;		//IN  - number of chocolate bars
	int barsPerSheep;	//OUT - number of bars per sheep
	int extraBars;		//OUT - number of extra bars

	     //OUTPUT - Class Heading
	PrintHeaderOstream(cout, ASS_NAME, ASS_TYPE, ASS_NUM, PROG_NAME);

	//INPUT - get the number for sheep and chocolate bars from the user
	numSheep = GetInt("Please input the number of sheep: ", MIN_SHEEP);
	numBars  = GetInt("Please input the number of Chocolate Bars: ", MIN_BARS);

	//CALC - find out how many bars each sheep gets and the leftover bars
	barsPerSheep = findBarsPerSheep(numSheep, numBars, MAX_BARS);
	extraBars    = findLeftOver(numSheep, numBars, MAX_BARS);

	//DRIVER FOR barsPerSheep
	//barsPerSheep = findBarsPerSheep(4, 12, 4);
	//cout << "testing barsPerSheep -> sheep = 4 bars = 12 : ";
	//cout << barsPerSheep << endl;

	//DRIVERS FOR extraBars
	//extraBars = findLeftOver(4, 12, 4);
	//cout << "testing extraBars -> sheep = 4 bars = 12 : ";
	//cout << extraBars << endl;


	//OUT  - Output the results of the calculations so we can start feeding sheep
	OutputResults(barsPerSheep, extraBars);

	//DRIVER FOR OutputResults
	//cout << "testing OutputResults -> bars for each = 4 leftover = 12 : ";
	//OutputResults(4, 12);
	return 0;
}
