/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION Initialize
 *_________________________________________________________________________
 *	This function reads in all info from the text files and creates two lists
 *
 *	RETURNS nothing
 *_________________________________________________________________________
 *************************************************************************/
void Initialize(SheepList &ourSheepList, PigList &ourPigList)
{
	ifstream inSheep;
	Sheep mySheep;
	string sheepName;
	unsigned short sheepAge;
	string sheepType;
	string sheepColor;

	ifstream inPig;
	Pig myPig;
	string pigName;
	unsigned short pigAge;
	string pigTail;

	// Gets SHEEP info from file and adds to list
	inSheep.open("Sheep.txt");
	while(inSheep)
	{
		getline(inSheep, sheepName);
		inSheep >> sheepAge;
		inSheep.ignore(numeric_limits<streamsize>::max(),'\n');
		getline(inSheep,sheepType);
		getline(inSheep,sheepColor);
		inSheep.ignore(numeric_limits<streamsize>::max(),'\n');

		mySheep.ChangeValues(sheepName,sheepAge);
		mySheep.SetWool(sheepType,sheepColor);

		ourSheepList.AddSheep(mySheep);
	}
	inSheep.close();



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
