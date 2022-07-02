/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#include "myHeader.h"
/***********************************************************************
 *  FUNCTION - GetInfo
 * 	___________________________________________________________________
 *	This function outputs the welcome message and prompts the user to
 *	enter his/her name and gender.
 *	- returns nothing - receives user's name and gender, then stores it
 *	  in the variables name and gender.
 * 	___________________________________________________________________
 * 	PRE - CONDITIONS:
 * 		name: Not previously defined.
 * 		gender: Not previously defined.
 * 	POST - CONDITIONS:
 * 		This function stores the user's name and gender into the variables
 * 		name and gender respectively; returns to int main for use by other
 * 		functions called by int main.
 ***********************************************************************/
void GetInfo(string &name,	// IN & OUT - user's name
			 char &gender)  // IN & OUT - user's gender
{
	cout << "Welcome to coin toss! Get 3 heads in a row to win!\n\n\n";

	cout << left << setw(27) << "What is your name? ";
	getline(cin, name);

	cout << setw(26) << "What is your gender (m/f): ";
	cin.get(gender);
	cin.ignore(1000, '\n');

}
