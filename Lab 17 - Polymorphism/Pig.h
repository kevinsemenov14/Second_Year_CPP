/*************************************************************************
 * AUTHOR		: RisQ & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/

#ifndef PIG_H_
#define PIG_H_

#include "Animal.h"

class Pig: public Animal
{

public:

	Pig();
	virtual ~Pig();
	Pig(string name, short age);

	void SetInitialValues(string pigName, short pigAge, PigTail tail);
	void ChangeAge(short aniAge);

	short GetAge()const;
	string GetName()const;
	string EnumToStringTail();
	virtual void  Display();
	virtual void  DisplayHeading();
	virtual void  DisplayLines()const;


private:

	PigTail tailType;

};




#endif /* PIG_H_ */
