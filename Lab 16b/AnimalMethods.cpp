/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "Animal.h"

/**************************************************************
* Animal ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/
Animal::Animal()
{
	name.clear();
	age = 0;
}

/**************************************************************
* ~Animal ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/
Animal::~Animal()
{

}

/**************************************************************
* Method ChangeValues: Class Animal
* -------------------------------------------------------------
* This method sets the name of the animal
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	name is set to blank
*
* POST-CONDITIONS
* 	name is set to animalName
***************************************************************/
void Animal::ChangeValues(string animalName) // IN - Animal's name
{
	name = animalName;
}

/**************************************************************
* Method ChangeValues: Class Animal
* -------------------------------------------------------------
* This method sets the age of the animal
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	age is set to 0
*
* POST-CONDITIONS
* 	name is set to animalName
***************************************************************/
void Animal::ChangeValues(unsigned short animalAge) // IN - Animal's Age
{
	age = animalAge;
}

/**************************************************************
* Method ChangeValues: Class Animal
* -------------------------------------------------------------
* This method sets the animals name and the animal age
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	name is set to blank
*   age is set to 0
* POST-CONDITIONS
* 	name is set to animalName
* 	age is set to animalAge
***************************************************************/
void Animal::ChangeValues(string animalName,        // IN - Animal's Name
		            unsigned short animalAge)		//  IN - Animal's Age
{
	name = animalName;
	age = animalAge;
}

/**************************************************************
* Method SetName: Class Animal
* -------------------------------------------------------------
* This method returns the name of the animal
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	name is set to blank
*
* POST-CONDITIONS
* 	name is set to animalName
***************************************************************/
string Animal::GetName() const
{
	return name;
}

/**************************************************************
* Method SetName: Class Animal
* -------------------------------------------------------------
* This returns the age of the animal
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	name is set to blank
*
* POST-CONDITIONS
* 	name is set to animalName
***************************************************************/
unsigned short Animal::GetAge() const
{
	return age;
}

/**************************************************************
* Method GetBoth: Class Animal
* -------------------------------------------------------------
* This method sets both the animals name and animal age
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	name is set to blank
* 	age is set to 0
*
* POST-CONDITIONS
* 	name is set to animalName
***************************************************************/
void Animal::GetBoth(string &animalName,             // OUT - Animal's Name
		            unsigned short &animalAge) const //  OUT - Animal's Age
{
	animalName = name;
	animalAge = age;
}

/**************************************************************
* Method DisplayHeader: Class Animal
* -------------------------------------------------------------
* This method displays the headers
* -------------------------------------------------------------
* PRE-CONDITIONS
* none
*
* POST-CONDITIONS
* 	Displays
*
* 	NAME   AGE
*
* 	as string
***************************************************************/
string Animal::DisplayHeader() const
{
	ostringstream out;

	out << "NAME         AGE";

	return out.str();
}

/**************************************************************
* Method DisplayLines: Class Animal
* -------------------------------------------------------------
* This method sets displays the lines
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	Displays
*
* 	----   ---
*
* 	as string
***************************************************************/
string Animal::DisplayLines() const
{
	ostringstream out;

	out << "-----------  ---";

	return out.str();
}

/**************************************************************
* Method DisplayInfo: Class Animal
* -------------------------------------------------------------
* This method sets displays name and age info
* -------------------------------------------------------------
* PRE-CONDITIONS
* none
*
* POST-CONDITIONS
* 	Displays
*
* 	nameInfo and ageInfo
*
* 	as string
***************************************************************/
string Animal::DisplayInfo() const
{
	ostringstream out;

	out << left;
	out << setw(12) << name << setw(4) << age;
	out << right;

	return out.str();
}
