/***********************************************************************
 * AUTHOR		: BEAK & Demon
 * LAB #9		: Testing
 * CLASS		: CS1B
 * SECTION		: TTh 0800
 * DUE DATE		: 19FEB2015
 ***********************************************************************/
#include "LAB9_HEADER.h"
/*************************************************************************
 * FUNCTION OutputResults
 *________________________________________________________________________
 * outputs the results to the screen
 *________________________________________________________________________
 * PRE-CONDITIONS
 * 		barsPerSheet	: the number of bars per sheep
 * 		extraBars		: the number of left over chocolate bars
 *
 * POST-CONDITIONS
 * 		outputs the results of the chocolate bar give-out to the screen
 *************************************************************************/
void OutputResults(int barsPerSheep,	//IN - bars per sheep
		    	   int extraBars)		//IN - extra bars
{
	if(barsPerSheep == 0)
	{
		cout << "There are not enough bars for every sheep to get one!\n";
		cout << "Sharing is caring, you will have " << extraBars << " bars left";
	}
	else
	{
		cout << "Each sheep gets " << barsPerSheep << " bars!\n";
		cout << "You will have " << extraBars << " bars left over.\n";
	}
}
