/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "MyHeader.h"

/**************************************************************************
 * FUNCTION ChangeAge
 *_________________________________________________________________________
 *	This function Changes the age of a desired animal
 *
 *	RETURNS lists changed if needed
 *_________________________________________________________________________
 *************************************************************************/
void ChangeAge(SheepList &ourSheepList, PigList &ourPigList)
{
	char animalType;
	string searchAnimal;
	string name;
	Sheep changedSheep;
	Pig   changedPig;
	unsigned short newAge;

	animalType = GetCheckCharInp(animalType, "\nWhich animal type would "
			                                 "you like to change? \n"
			                                 "SHEEP or PIGS (S/P)? ",
							                 'S','P');
	if(animalType == 'S')
	{
		cout << ourSheepList.GetSheepNames();

		cout << "Whose age do you want to change? ";
		getline(cin, searchAnimal);

		name = ourSheepList.FindSheep(searchAnimal);

		if(name == searchAnimal)
		{

			newAge = GetAndCheckInp(newAge,"What is their new age? " , 0, 9);

			ourSheepList.ChangeAge(searchAnimal,newAge);

			cout << "Age was successfully changed!\n\n";
		}
		else
		{
			cout << endl;
			cout << searchAnimal << " was not found.\nAge not changed!\n\n";
		}

	}
	else if(animalType == 'P')
	{
		cout << ourPigList.GetPigNames();

		cout << "Whose age do you want to change? ";
		getline(cin, searchAnimal);

		name = ourPigList.FindPig(searchAnimal);

		if(name == searchAnimal)
		{

			newAge = GetAndCheckInp(newAge,"What is their new age? " , 0, 9);

			ourPigList.ChangeAge(searchAnimal,newAge);

			cout << "Age was successfully changed!\n\n";
		}
		else
		{
			cout << endl;
			cout << searchAnimal << " was not found.\nAge not changed!\n\n";
		}
	}










}
