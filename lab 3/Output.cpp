/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#include "myHeader.h"
/*******************************************************************************
 *  FUNCTION - Output
 * 	___________________________________________________________________________
 *	This function will output the headCount, tailsCount, and the percHeads
 *	It will tell the user how many flips it took to get three heads in a row
 *	as well as the overall percentage of head flips over total number of
 *	flips.
 *	returns nothing - outputs statements to console
 * 	___________________________________________________________________________
 * 	PRE - CONDITIONS:
 * 		headCount  - calculated in the true branch of the if statement in the
 * 					 while loop of int main
 * 		tailsCount - calculated in the false branch of the if statement in the
 * 					 while loop of int main
 * 		percHeads  - calculated in FindAvg function called in int main
 * 	POST - CONDITIONS:
 * 		This function will output, to the console, a statement telling how
 * 		many tosses it took to get 3 heads in a row and the percentage of heads
 * 		flipped relative to the total number of flips.
 ******************************************************************************/
void Output(int &headCount,		// IN & OUT - the number of heads flipped
			int &tailsCount,	// IN & OUT - the number of tails flipped
			float &percHeads)	// IN & OUT - the ratio of heads flipped to
								//			  total number of flips, expressed
								//			  as a percentage.
{


	cout << endl << endl << "It took you " << headCount + tailsCount
		 << " tosses to get 3 heads in a row.\n";
	cout << "On average you flipped heads " << setprecision(2)
		 << percHeads << "%" << " of the time";
}



