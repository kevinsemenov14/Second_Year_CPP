/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "Sheep.h"

/**************************************************************
* Sheep ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/
Sheep::Sheep()
{
	type = DEFAULT;
}

/**************************************************************
* ~Sheep ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/
Sheep::~Sheep()
{

}

/**************************************************************
* Method SetType: Class Sheep
* -------------------------------------------------------------
* This method sets the Sheep's type
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	type is set to NONE
*
* POST-CONDITIONS
* 	type is set to sheepType
***************************************************************/
void Sheep::SetType(string sheepType)
{

	switch (sheepType[0])
	{
		case 'L' : type = LONG;
				  break;

		case 'M' : type = MEDIUM;
				  break;

		case 'F' : type = FINE;
				  break;

		case 'C' : type = CARPET;
				 break;

		default  : type = DEFAULT;
				   break;

	}

}

/**************************************************************
* Method SetColor: Class Sheep
* -------------------------------------------------------------
* This method sets the color of the sheep
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	color is set to blank
*
* POST-CONDITIONS
* 	color is set to sheepColor
***************************************************************/
void Sheep::SetColor(string  sheepColor)
{
	color = sheepColor;
}

/**************************************************************
* Method setWool: Class Sheep
* -------------------------------------------------------------
* This method sets both color and wooltype
* -------------------------------------------------------------
* PRE-CONDITIONS
* sheepType set to default
* sheepColor set to default
*
* POST-CONDITIONS
* 	color and wooltype set
***************************************************************/
void Sheep::SetWool( string sheepType,
	                 string sheepColor)
{
	SetType (sheepType);
	SetColor(sheepColor);
}

/**************************************************************
* Method GetType: Class Sheep
* -------------------------------------------------------------
* This method gets a string from an enum
* -------------------------------------------------------------
* PRE-CONDITIONS
* type set to default
* POST-CONDITIONS
* none
***************************************************************/
string Sheep::GetType() const
{
	string woolType;
	switch (type)
		{
			case LONG: woolType = "Long";
									   break;

			case MEDIUM: woolType = "Medium";
									   break;

			case FINE: woolType = "Fine";
									   break;

			case CARPET: woolType = "Carpet";
									   break;

			default:                   woolType = "None";
									   break;
		}
	return woolType;
}

/**************************************************************
* Method GetColor: Class Sheep
* -------------------------------------------------------------
* This method returns the color of the sheep
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	color is set to blank
*
* POST-CONDITIONS
* returns the color of the sheep
***************************************************************/
string Sheep::GetColor() const
{
	return color;
}

/**************************************************************
* Method GetBoth: Class Sheep
* -------------------------------------------------------------
* This returns the color and type of the sheep
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	type is set to blank
* 	color is set to default
* POST-CONDITIONS
* 	none
***************************************************************/
void Sheep::GetBoth(string &sheepType,
		            string &sheepColor) const
{
	sheepType = type;

	sheepColor= color;

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
string Sheep::DisplayHeader() const
{
	ostringstream out;

	out << Animal::DisplayHeader();
	out << "  WOOLTYPE  COLOR";

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
string Sheep::DisplayLines() const
{
	ostringstream out;

	out << Animal::DisplayLines();
	out << "  --------  -----";

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
string Sheep::DisplayInfo() const
{
	ostringstream out;

	out << setw(12) << GetName() << setw(4) << GetAge();
	out << left;
	out << setw(10) << GetType() << GetColor();
	out << right;

	return out.str();
}


