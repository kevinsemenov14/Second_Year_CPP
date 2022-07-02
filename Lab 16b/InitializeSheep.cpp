/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION InitializeSheep
 *_________________________________________________________________________
 *	This function reads in all info from the text files and creates two lists
 *
 *	RETURNS nothing
 *_________________________________________________________________________
 *************************************************************************/
void InitializeSheep(SheepList &ourSheepList)
{
	ifstream inSheep;
	Sheep mySheep;
	string sheepName;
	unsigned short sheepAge;
	string sheepType;
	string sheepColor;

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

}
