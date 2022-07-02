/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#include "MyHeader.h"

/***********************************************************************
 *  Lab #3 - Supplement: Coin Flip
 * 	___________________________________________________________________
 *	This program will accept the user's name and gender, challenge him
 *	to get 3 heads in a row, and prompt him to press enter to flip.
 *	It will then output the number of tosses taken to get 3 heads in a
 *	row and the percentage of heads flipped relative to the total
 *	number of flips.
 * 	___________________________________________________________________
 * 	INPUT:
 * 		name: name of the user
 * 		gender: gender of the user
 * 	OUTPUT:
 * 		average: the average number of heads flipped as a percentage
 * 				 relative to the total number of flips
 * 		headCount: the number heads flipped. Added to tailsCount to
 * 				   determine the total number of flips to be outputted
 * 				   to the screen.
 ***********************************************************************/
int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER 	: Programmer's Name
	 * CLASS 		: Student's Course
	 * SECTION 		: Class Days and Times
	 * LAB_NUM	 	: Lab Number (specific to this lab)
	 * LAB_NAME 	: Title of the Lab
	 *******************************************************************/

	// OUTPUT Class Heading

	string name;				   // IN - name of the user
	string nameCoin;			   // CALC - whether the coin is heads or tails
	bool coin;                     // CALC - a boolean assigned to true if the
								   //		 random number generator in FlipCoin
								   //		 produces 1 and false if 0 is
								   //		 produced.
	int headCount;                 // CALC - the number of heads flipped
	int tailsCount;                // CALC - the number of tails flipped
	string title;                  // CALC & OUT - assigned to "Mr." if user is
								   //			   male; "Ms." if female.
	float percHeads;               // OUT - the ratio of headCount to the total
								   //       number of flips; expressed as a
								   //		percentage
	char gender;				   // IN & CALC - gender of the user
	int headsEnough;			   // CALC - the number of heads flipped that
								   //		 count towards the three heads in a
							       //		 row necessary.
	headCount = 0;
	tailsCount = 0;
	printHeader();
	GetInfo(name, gender);
	gender = toupper(gender);

	srand(time(NULL));
	// SWITCH STATEMENT - assigns "Mr." to title if gender entered was male and
	//                    "Ms." if gender entered was female.
	switch(gender)
	{
		case 'M': title = "Mr. ";
		break;

		case 'F': title = "Ms. ";
		break;

		default: cout << "Invalid gender. Please try again. ";
		break;
	}

	cout << endl << endl << "Try to get 3 heads in a row. Good luck " << title
		 << name << " !" << endl;

	cout << " \nPress <enter> to flip";
	cin.ignore(1000, '\n');

	coin = FlipCoin();

	// WHILE LOOP - executes until the user has managed to roll three heads in a
	//				row.
	while(headsEnough < 3)
	{
		// SELECTION STMT - if coin, a boolean variable, is assigned true in the
		//					FlipCoin function, then "HEAD" will be displayed
		//					to the screen, and both headsEnough and headsCount
		//					will be incremented. Otherwise, "TAIL" will be dis-
		//				    played, tailsCount will be incremented, and
		//					headsEnough will be re-assigned to 0, so that the
		//					user's attempt to get 3 heads in a row will start
		//				    over again.
		if(coin == true)
		{
			nameCoin = "heads ";
			cout << "HEAD";
			headsEnough = headsEnough + 1;
			headCount = headCount + 1;

		}
		else
		{
			nameCoin = "tails ";
			cout << "TAIL";
			tailsCount = tailsCount + 1;
			headsEnough = 0;
		}

		if(headsEnough < 3)
		{
			cout << " \nPress <enter> to flip";
			cin.ignore(1000, '\n');
			coin = FlipCoin();
		}

	}

	percHeads = FindAvg(headCount, tailsCount);

	Output(headCount, tailsCount, percHeads);

	return 0;
}
