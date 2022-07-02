/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/

#include "Pig.h"

Pig::Pig()
{
	tailType = STRAIGHT;
}

Pig::~Pig()
{
}

Pig::Pig(string pigName, short pigAge)
{
	Animal::Animal(string pigName, short pigAge);
	tailType = STRAIGHT;
}

void Pig::SetInitialValues(string pigName, short pigAge, PigTail tail)
{
	Animal::SetInitialValues(pigName, pigAge);
	tailType = tail;
}

void Pig::ChangeAge(short pigAge)
{
	//Ask if changeAge needs to be value returning - not sure if it has to
	Animal::ChangeAge(pigAge);

}


string Pig::EnumToStringTail()
{
	string piggyTail;

	switch(tailType)
	{
	case CORKSCREW:	piggyTail = "Corkscrew";
	break;

	case CURL_UP: piggyTail = "Curls Up";
	break;

	case CURL_DOWN:  piggyTail = "Curls Down";
	break;

	case CURL_LEFT: piggyTail = "Curls Left";
	break;

	case CURL_RIGHT: piggyTail = "Curls Right";
	break;

	case STRAIGHT: piggyTail = "Straight";
	break;
	}

	return piggyTail;

}


PigTail StringToEnumTail(char userString)
{
	PigTail piggyTail;

	switch(userString)
	{
	case 'C':
				piggyTail = CORKSCREW;
				break;
	case 'U':
				piggyTail= CURL_UP;
				break;
	case 'R':
				piggyTail = CURL_RIGHT;
				break;
	case 'L':
				piggyTail = CURL_LEFT;
				break;
	case 'D':
				piggyTail = CURL_DOWN;
				break;

	case 'S': piggyTail = STRAIGHT;
			  break;
	default: cout << "Encountered an error!";
	}
	//DO A GET AND CHECK CHAR INP FOR ALL 6 CASES - JIC USER ENTERS 'B'

	return piggyTail;
}

void Pig::Display()
{
	Animal::Display();
	cout << EnumToStringTail() << endl;
}
string Pig::GetName()const
{
	return Animal::GetName();
}
short Pig::GetAge()const
{
	return Animal::GetAge();
}


void Pig::DisplayHeading()
{
	Animal::DisplayHeading();
	cout << left;
	cout << setw(24) << "TAILTYPE";
	cout << right << endl;
}
void Pig::DisplayLines()const
{
	Animal::DisplayLines();
	cout << left;
	cout << setw(11) << " " << setfill('-') << '-'
	     << setfill(' ') << right << endl;
}
