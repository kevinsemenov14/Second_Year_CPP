/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "Pig.h"

/**************************************************************
* Pig ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/
Pig::Pig()
{
	tail = NONE;
}

/**************************************************************
* ~Pig ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/
Pig::~Pig()
{

}

/**************************************************************
* Method SetTail: Class Pig
* -------------------------------------------------------------
* This method sets the Pig's tail
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	type is set to NONE
*
* POST-CONDITIONS
* 	type is set to pigTail
***************************************************************/
void Pig::SetTail(string pigTail)
{
	switch (pigTail[0])
	{
		case 'S' : tail = STRAIGHT;
								   break;

		case 'C' :  if( pigTail[4] == 'S')
					{
						tail = CORKSCREW;
					}
					else if(pigTail[5] == 'U')
					{
						tail = CURL_UP;
					}
					else if(pigTail[5] == 'R')
					{
						tail = CURL_RIGHT;
					}
					else if(pigTail[5] == 'L')
					{
						tail = CURL_LEFT;
					}
					else if(pigTail[5] == 'D')
					{
						tail = CURL_DOWN;
					}
					break;

		default:   tail = NONE;
				   break;

	}
}

/**************************************************************
* Method ChangeName: Class Pig
* -------------------------------------------------------------
* This method changes the pigs name
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	name is set
*
* POST-CONDITIONS
* 	name is set to newName
***************************************************************/
void Pig::ChangeName(string newName)
{
	ChangeValues(newName);
}

/**************************************************************
* Method ChangeAge: Class Pig
* -------------------------------------------------------------
* This method changes the pigs age
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	age is set
*
* POST-CONDITIONS
* 	age is set to newAge
***************************************************************/
void Pig::ChangeAge(unsigned short newAge)
{
	ChangeValues(newAge);
}

/**************************************************************
* Method GetTail: Class Pig
* -------------------------------------------------------------
* This method gets a string from an enum
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	tail is an enum
*
* POST-CONDITIONS
* 	returns tail as string
***************************************************************/
string Pig::GetTail() const
{
	string tailType;
	switch (tail)
		{
			case STRAIGHT: tailType = "Straight";
									   break;

			case CORKSCREW: tailType = "Corkscrew";
									   break;

			case CURL_UP: tailType    = "Curls Up";
									   break;

			case CURL_RIGHT: tailType = "Curls Right";
									   break;

			case CURL_LEFT: tailType = "Curls Left";
									   break;

			default:                   tailType = "None";
									   break;
		}
	return tailType;
}

/**************************************************************
* Method GetName: Class Pig
* -------------------------------------------------------------
* This method gets a string from an enum
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	tail is an enum
*
* POST-CONDITIONS
* 	returns tail as string
***************************************************************/
string Pig::GetPigName() const
{
	return GetName();
}

/**************************************************************
* Method GetAge: Class Pig
* -------------------------------------------------------------
* This method gets the age
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	returns age
***************************************************************/
unsigned short Pig::GetPigAge() const
{
	return GetAge();
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
string Pig::DisplayHeader() const
{
	ostringstream out;

	out << Animal::DisplayHeader();
	out << "  TAILTYPE";

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
string Pig::DisplayLines() const
{
	ostringstream out;

	out << Animal::DisplayLines();
	out << "  ---------";

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
string Pig::DisplayInfo() const
{
	ostringstream out;

	out << Animal::DisplayInfo();
	out << left;
	out << GetTail();
	out << right;

	return out.str();
}
