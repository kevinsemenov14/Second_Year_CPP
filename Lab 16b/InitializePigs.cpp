/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION InitializePigs
 *_________________________________________________________________________
 *	This function reads in all info from the text files and creates two lists
 *
 *	RETURNS nothing
 *_________________________________________________________________________
 *************************************************************************/
void InitializePigs(PigList &ourPigList)
{
	ifstream inPig;
	Pig myPig;
	string pigName;
	unsigned short pigAge;
	string pigTail;

	// Gets SHEEP info from file and adds to list
	inPig.open("Pigs.txt");
	while(inPig)
	{
		getline(inPig, pigName);
		inPig >> pigAge;
		inPig.ignore(numeric_limits<streamsize>::max(),'\n');
		getline(inPig,pigTail);
		inPig.ignore(numeric_limits<streamsize>::max(),'\n');

		myPig.ChangeName(pigName);
		myPig.ChangeAge(pigAge);
		myPig.SetTail(pigTail);

		ourPigList.AddPig(myPig);
	}
	inPig.close();

}
