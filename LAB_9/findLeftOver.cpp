/***********************************************************************
 * AUTHOR		: BEAK & Demon
 * LAB #9		: Testing
 * CLASS		: CS1B
 * SECTION		: TTh 0800
 * DUE DATE		: 19FEB2015
 ***********************************************************************/
#include "LAB9_HEADER.h"
/*************************************************************************
 * FUNCTION findLeftOver
 *________________________________________________________________________
 * This function returns the integer of the left over bars.
 *________________________________________________________________________
 * PRE-CONDITIONS
 * 		numSheep		: number of sheep as an integer (must be > 0)
 * 		numbars			: number of chocolate bars (> or = to 0)
 * 		maxBars			: maximum bars a sheep can eat
 *
 * POST-CONDITIONS
 * 		returns the valid integer of left over bars.
 *************************************************************************/
int findLeftOver(int numSheep, 		//IN - Number of sheep
				 int numBars,		//IN - Number of chocolate bars
				 const int maxBars) //IN - maximum bars a sheep can eat
{
	int barsPer;

	barsPer = numBars / numSheep;

	if(barsPer > maxBars)
	{
		barsPer = maxBars;
	}

	return (numBars - (barsPer * numSheep));

}
