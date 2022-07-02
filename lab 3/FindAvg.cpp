/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#include "myheader.h"
/***********************************************************************
 *  FUNCTION - FindAverage
 * 	___________________________________________________________________
 *	This function will take in the number of heads and number of tails
 *	flipped, sum them up to get the total number of flips, then divide
 *	the number of heads flipped by the total number of flips to get a
 *	decimal that will be multiplied by 100 to obtain a percentage.
 *	- returns percHeads to int main
 * ___________________________________________________________________
 * 	INPUT:
 * 		headCount  - the number of heads flipped
 * 		tailsCount - the number of tails flipped
 * 	OUTPUT:
 * 		percHeads: the average number of heads flipped as a percentage
 * 				 relative to the total number of flips
 * ___________________________________________________________________
 * PRE-CONDITIONS:
 * 	headsCount - a counter in the true branch of the if statement in
 * 				 the while loop in int main.
 * 	tailsCount - a counter in false branch of the if statement in the
 * 				 while loop in int main.
 * 	percHeads  - not previously defined.
 * POST-CONDITIONS:
 * 	percHeads - returned to int main to be used by Output, a function
 * 				that will output the percentage to the console.
 ***********************************************************************/
float FindAvg(int headCount,  // IN & CALC - the number of heads flipped
			  int tailsCount) // IN & CALC - the number of tails flipped; added
							  //			 with headCount to attain total
						      //			 number of flips
{
	float percHeads;

	percHeads = headCount / float(headCount + tailsCount) * 100;

	return percHeads;
}


