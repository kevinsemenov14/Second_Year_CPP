/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#include "myheader.h"
/***********************************************************************
 *  FUNCTION - FlipCoin
 * 	___________________________________________________________________
 *	This function randomly generates a value for the boolean variable
 *	coin, assigning 1 if coin is true and 0 if false.
 *	- returns coin to int main, where, using an if-then-else stmt, the
 *	  name of the face flipped is assigned to heads if coin is assigned
 *	  to 1 and tails if assigned to 0.
 *	___________________________________________________________________
 * 	PRE - CONDITIONS:
 * 		coin - not previously assigned
 * 	POST - CONDITIONS:
 * 		This function stores the user's name and gender into the variables
 * 		name and gender respectively; returns to int main for use by other
 * 		functions called by int main.
 ***********************************************************************/

bool FlipCoin()
{
	bool coin;			// IN & OUT - a boolean variable in which, if the random
						// 			  generator assigns true to it, will be
						//			  assignedto one (will evaluate to heads in
						//			  main) and if generator assigns false to it
						//			  will be assigned to zero (will evaluate to
						//			  tails in main).
	coin = rand()% 2;

	if(coin == true)
	{
		coin = 1;
	}
	else
	{
		coin = 0;
	}


	return coin;

}



