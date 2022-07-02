/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/
#include "Animal.h"
/**************************************************************************
* Animal()
*__________________________________________________________________________
*	Constructor; allocates memory reserved for one Animal object.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Initializes age to -1.
**************************************************************************/

/**************************************************************************
* ~Animal()
*__________________________________________________________________________
*	Destructor; deallocates memory reserved for one Animal object.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Deallocates memory
**************************************************************************/
Animal::Animal()
{
	age  = 0;
}

Animal::~Animal()
{
}

Animal::Animal(string sheepName, short sheepAge)
{
	name = sheepName;
	age  = sheepAge;
}

/**************************************************************************
* SetInitialValues()
*__________________________________________________________________________
*	Sets the initial name and age of one sheep
*__________________________________________________________________________
* PRE-CONDITIONS:
* 	sheepName	:	name of sheep
* 	sheepAge 	:	age of sheep
*
* POST-CONDITIONS:
* 	Stores values for age and name.
**************************************************************************/
void Animal::SetInitialValues(string aniName, short aniAge)
{
	name = aniName;
	age  = aniAge;
}

/**************************************************************************
* GetName()
*__________________________________________________________________________
*	Gets a sheep's name.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns the name of the sheep.
**************************************************************************/
string Animal::GetName()const
{
	return name;
}

short Animal::GetAge()const
{
	return age;
}

void Animal::ChangeAge(short aniAge)
{
	age = aniAge;
}

void Animal::Display()const
{
		cout << left;
		cout << setw(13) << name << setw(4) << age;
		cout << right;

}

void Animal::DisplayHeading()const
{
	cout << left;
	cout << setw(12) << "NAME" << setw(5) << "AGE";
	cout << right;

}


void Animal::DisplayLines() const
{
	cout << left;
	cout << setfill('-') << setw(9) << '-' << "   " << "---" << " "
		 << right;

}

