/*************************************************************************
 * AUTHOR		: RisQ & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/
#ifndef SHEEP_H_
#define SHEEP_H_


#include "Animal.h"


class Sheep: public Animal
{

public:
	Sheep();
	virtual ~Sheep();
	Sheep(string name, short age, WoolType wool, string color);

	void GetSheepValues(WoolType &type,
			  	  	    string &colorWooly) const;
	WoolType GetWool() const;
	string GetColor() const;

	void ChangeAge(short aniAge);

	void SetInitialValues(string sheepName,
							  short sheepAge,
							  WoolType type,
							  string colorWooly);

	string EnumToStringWool();

	virtual void Display();
	virtual void DisplayHeading();
	virtual void DisplayLines()const;


private:

	string   woolColor; // IN & OUT -- the color of the sheep's wool
	WoolType wool;	// IN & OUT -- the wool type of the sheep



};



#endif /* SHEEP_H_ */
