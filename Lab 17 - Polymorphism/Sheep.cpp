/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/

#include "Sheep.h"
/**************************************************************************
* Sheep()
*__________________________________________________________________________
*	Constructor; allocates memory reserved for one Sheep object.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Initializes age to -1.
**************************************************************************/
Sheep::Sheep()
{

}

/**************************************************************************
* ~Sheep()
*__________________________________________________________________________
*	Destructor; deallocates memory reserved for one Sheep object.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Deallocates memory
**************************************************************************/
Sheep::~Sheep()
{

}

Sheep::Sheep(string sheepName, short sheepAge, WoolType sheepWool, string sheepColor):
		Animal::Animal(sheepName, sheepAge)
{
	wool = sheepWool;
	woolColor = sheepColor;
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
void Sheep::SetInitialValues(string sheepName,
							 short sheepAge,
							 WoolType type,
							 string color)
{
	Animal::SetInitialValues(sheepName, sheepAge);
	wool = type;
	woolColor = color;

}

/**************************************************************************
* GetWool()
*__________________________________________________________________________
*	Gets the wool type for the sheep
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns wool
**************************************************************************/
WoolType Sheep::GetWool()const
{
	return wool;
}


/**************************************************************************
* GetColor()
*__________________________________________________________________________
*	Gets the color for the sheep
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns woolColor
**************************************************************************/
string Sheep::GetColor()const
{
	return woolColor;
}

/**************************************************************************
* GetWool()
*__________________________________________________________________________
*	Gets the wool type for the sheep
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns wool
**************************************************************************/
void Sheep::ChangeAge(short sheepAge)
{

	Animal::ChangeAge(sheepAge);

}

/**************************************************************************
* EnumToStringWool()
*__________________________________________________________________________
*	Gets the string for an enumerated type wool
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns a string for the wool type
**************************************************************************/
string Sheep::EnumToStringWool()
{
	string woolySheep;

	switch(wool)
	{
	case LONG:	woolySheep = "Long";
	break;

	case MEDIUM: woolySheep = "Medium";
	break;

	case FINE: 	 woolySheep = "Fine";
	break;

	case CARPET: woolySheep = "Carpet";
	break;
	}

	return woolySheep;

}

WoolType StringToEnumWool(char userString)
{
	WoolType sheepWool;

	switch(userString)
	{
	case 'L':	sheepWool = LONG;
	break;

	case 'M': sheepWool = MEDIUM;
	break;

	case 'F': 	 sheepWool = FINE;
	break;

	case 'C': sheepWool = CARPET;
	break;

	default: cout << "Error finding class!";
	break;
	}

	return sheepWool;
}


/**************************************************************************
* DisplaySheep()
*__________________________________________________________________________
*	Displays the sheep's name, age, and wool type in table format
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Outputs the sheep's name, age, and wool type in table format to the
* 	console
**************************************************************************/
void Sheep::Display()
{
	Animal::Display();
	cout << left;
	cout << setw(13) << EnumToStringWool() << woolColor << endl;
	cout << right;
}

/**************************************************************************
* DisplayHeading()
*__________________________________________________________________________
*	Displays the heading of the table
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Outputs the heading
**************************************************************************/

void Sheep::DisplayHeading()
{
	Animal::DisplayHeading();
	cout << left;
	cout << setw(13) << "WOOLTYPE";
	cout << "COLOR";
	cout << right << endl;
}

/**************************************************************************
* DisplayLines()
*__________________________________________________________________________
*	Displays the lines for the sheep table
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Outputs the lines
**************************************************************************/
void Sheep::DisplayLines()const
{
	Animal::DisplayLines();
	cout << left;
	cout << setw(11) << " " << setfill('-') << '-'
	     << setfill(' ') << "  " << "-----\n";
}


